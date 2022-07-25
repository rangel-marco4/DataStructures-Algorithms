//
//  main.cpp
//  QueueImplementation
//
//  Created by Marco Rangel on 7/23/22.
//

/*
 Operations:
    enqueue - add element at end of queue
    dequeue - removes and returns element at the front of the queue
    isEmpty - checks if queue is empty
    ifFull - checks if queue is full
    count - counts the number of elements in queue
    display - shows the contents of queue
    
 */

#include <iostream>
#include <vector>
using namespace std;

#define max 10 // defining max length of the queue

// Queue class
class Queue{
private:
    int arr[max];
    int rear;
    int front;
    
public:
    Queue();
    void enqueue(int data);
    int dequeue();
    bool isFull();
    int count();
    bool isEmpty();
    void display();
};

// constructor
Queue::Queue(){
    front = -1;
    rear = -1;
    for(int i = 0; i < max; i++){
        arr[i] = 0;
    }
}

// add to end of queue
void Queue::enqueue(int data){
    if(isEmpty()){
        rear = 0;
        front = 0;
    }
    else if(isFull()){
        cout << "Queue is full, Overflow!" << endl;
        return;
    }
    else{
        rear++;
    }
    arr[rear] = data;
}

// remove from queue
int Queue::dequeue(){
    int popVal = 0;
    if(isEmpty()){
        cout << "Queue is empty, Underflow occurred!" << endl;
        return 0;
    }
    else if(front == rear){
        popVal = arr[front];
        arr[front] = 0;
        front = -1;
        rear = -1;
        return popVal;
    }
    else{
        popVal = arr[front];
        arr[front] = 0;
        front++;
        return popVal;
        
    }
}

// checks if full
bool Queue::isFull(){
    return (rear != (max-1)) ? false : true;
}

// checks if empty
bool Queue::isEmpty(){
    return ((front == -1) && (rear == -1)) ? true : false;
}

// counts the number of elements in queue
int Queue::count(){
    int count = 0;
    if(isEmpty()){
        return 0;
    }
    else if (isFull()){
        return max;
    }
    else {
        for (int i = 0; i < max; i++){
            (arr[i] != 0) ? count++ : count*1;
        }
    }
    return count;
}

// displays the elements in queue
void Queue::display(){
    cout << "Elements in Queue: ";
    for(int i = 0; i < max; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, const char * argv[]) {
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(14);
    q.enqueue(19);
    q.display();
    
    cout << "Number of elements in Queue: " << q.count() << endl;
    
    q.dequeue();
    cout << "----Elements after dequeue----" << endl;
    q.display();
    
    return 0;
}
