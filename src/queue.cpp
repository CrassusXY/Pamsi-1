#include "queue.hh"

Priority_queue::Priority_queue(){
    head = nullptr;
    length = 0;
}

//returns 1 if queue is empty
//if queue isn't empty returns 0
bool Priority_queue::is_empty(){
    //std::cout<<"PUSTA?"<<std::endl;
    return(head==nullptr);

}

//returns queue size
uint Priority_queue::size(){
    return length;
}

//prints first element of queue
void Priority_queue::print(){
    std::cout << head->get_message();
}

//returns first element of queue
int Priority_queue::pop(){
    if(!is_empty()){
        Node *tmp = head;               //upomocnicza wartosc wskazuje na to, na co wskazywal do tej pory head
        print();                    
        head = head->get_next();        //ustawiam wskaznik head na nastepny wezel
        free(tmp);                      //zwalniam pamiec z usunietego wezla
        length--;
        return 0;
    }
    else{
        throw std::logic_error("Queue is empty!");
        return -1;
    }
}


int Priority_queue::push(const uint & prio, const char & item){
    Node *add = new Node(prio, item);             //new node

    Node *tmp = head;                   //temporary *node to search for priority
    if(!is_empty()){

        if(tmp->get_priority() > prio){       //wstawianie na poczatek
            add->set_next(tmp);
            head = add;
            length++;
            return 0; 
        }

        while(tmp->get_next() != nullptr && tmp->get_next()->get_priority() < prio){     //wstawianie w srodek wezla
            tmp = tmp->get_next();
        }
        add->set_next(tmp->get_next());
        tmp->set_next(add);
        length++;
        return 0;
    }
    else{
        add->set_next(tmp);
        head = add;
        length++;
        return 0;
    }
    return -1;
}