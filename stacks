//
//  main.cpp
//  StackImplementation (Using Arrays)
//
//  Created by Marco Rangel on 7/23/22.

/*
 
 Operations:
    push() - place an item onto the stack
    pop() - return the item at the top of the stack and remove it
    isEmpty() - check if stack is empty
    isfull() - check if stack is full
    peek() - access the item at the i position
    count() - get the number of items in the stack
    change() - change the item at the i position
    display() - display all the items in the stack
 
 */


#include <iostream>
using namespace std;

// stack class
class Stack{
private:
    int top;
    int arr[5];
    
public:
    Stack();
    bool isEmpty();
    bool isFull();
    void push(int data);
    int pop();
    int count();
    int peek();
    void change(int idx, int data);
    void display();
};

// constructor
Stack::Stack(){
    top = -1;
    for(int i = 0; i < 5; i++){
        arr[i] = 0;
    }
}

// is empty
bool Stack::isEmpty(){
    return (top == -1) ? true : false;
}

// is full
bool Stack::isFull(){
    return (top == 4) ? true : false;
}

// push value on stack
void Stack::push(int data){
    if(isFull()){
        cout << "Stack Overflow" << endl;
    }
    else{
        top++;
        arr[top] = data;
    }
}

// pop value from stack
int Stack::pop(){
    if(isEmpty()){
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else{
        int topVal = arr[top];
        arr[top] = 0;
        top--;
        return topVal;
    }
}

// count function
int Stack::count(){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
        return -1;
    }
    else{
        int count = 0;
        for(int i = 0; i < 5; i++){
            (arr[i] == 0) ? count*1 : count++;
        }
        return count;
    }
}

// peek function
int Stack::peek(){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
        return -1;
    }
    else{
        return arr[top];
    }
}

// change function
void Stack::change(int idx, int data){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        if(idx < 5){
            cout << "Element change at index (" << idx << ") from " << arr[idx];
            arr[idx] = data;
            cout << " to " << arr[idx] << endl;
        }
        else{
            cout << "Provided index is out of range" << endl;
        }
    }
}

// display function
void Stack::display(){
    cout << "Stack values are: " << endl;
    for (int i = 0; i < 5; i++){
        cout << i << ": " << arr[i] << endl;
    }
}


int main(){
    
    Stack s;
    s.push(13);
    s.push(3);
    s.push(55);
    s.push(77);
    s.push(32);
    
    s.display();
    
    cout << "Popped: " << s.pop() << endl;
    
    s.display();
    
    s.change(3, 88);
    cout << endl;
    s.display();
    cout << endl;
    cout << "Peek at top value: " << s.peek() << endl;
    
    
    return 0;
}
