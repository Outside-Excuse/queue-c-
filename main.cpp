//use of queue in c++
//Alejandro Hidalgo Badillo 
// 9 de septiembre del 2022
//https://www.youtube.com/watch?v=jaK4pn1jXTo&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=6

#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> numbers){
    while(!numbers.empty()){
        cout<<numbers.front()<<endl;
        numbers.pop();

    }
    cout<<endl;
}

int main(){
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    //print the size of my queue
    cout<<"the SIZE of my queue is: "<<myQueue.size()<<endl;

    //print the forn element of my queue
    cout<<"the FIRST element of my queue is: "<< myQueue.front()<<endl;

    //print the last element of the queue
    cout<<"the LAST element of my queue is: "<<myQueue.back()<<endl;

    printQueue(myQueue);

}