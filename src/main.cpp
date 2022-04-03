#include "queue.hh"
#include <algorithm>
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using namespace std::chrono;

int main(){
    Priority_queue test;
    std::string message;
    cout<<endl<<"Co Wojtek napisał do Ani: ";
    std::getline(cin, message);

    int len=message.length();

    int *randArray = new int[len];
    int *priorityArray = new int[len];

    for(int i=0; i<len; i++){
      randArray[i]=i;
      priorityArray[i]=i;
    }

    std::random_shuffle(randArray, randArray+len);
    cout<<endl;

    cout<<"Co otrzymała Ania: ";
    for(int i=0; i<len; i++){
        int j=randArray[i];
        test.push(priorityArray[j], message[j]);
        cout<<message[j];
    }


    cout<<endl<<endl<<"Po transkrypcji: ";
    for(int x=0; x<len; x++){
        test.pop();
    }
    cout<<endl;
    return 0;
}

    //Priority_queue test;
    //std::string message(500, 'X' );
    //
    //int popowanie[500];
    //int pushowanie[500];
//
    //int len=message.length();
    //int *randArray = new int[len];
    //int *priorityArray = new int[len];
//
    //for(int i=0; i<len; i++){
    //  randArray[i]=i;
    //  priorityArray[i]=i;
    //}
//
    //std::random_shuffle(randArray, randArray+len);
    //cout<<endl;
    //
    //for(int z=0; z<500; z++){
    //    auto start = high_resolution_clock::now();
    //    for(int i=0; i<z; i++){
    //        int j=randArray[i];
    //        test.push(priorityArray[j], message[j]);
    //    }
    //    auto stop = high_resolution_clock::now();
    //    auto duration = duration_cast<microseconds>(stop - start);
    //    pushowanie[z]=duration.count();
//
//
    //    auto startA = high_resolution_clock::now();
    //    for(int i=0; i<z; i++){
    //        test.pop();
    //    }
    //    auto stopA = high_resolution_clock::now();
    //    auto durationA = duration_cast<milliseconds>(stopA - startA);
    //    popowanie[z]=durationA.count();
    //}
    //std::ofstream poped;
    //poped.open ("pop.txt");
    //std::ofstream pushed;
    //pushed.open ("push.txt");
//
    //for(int i=0; i<500; i++){
    //    poped << popowanie[i]<<", ";
    //    pushed << pushowanie[i]<<", ";
    //}
    //
//
//
    //poped.close();
    //pushed.close();
    //return 0;


