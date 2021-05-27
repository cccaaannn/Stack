#pragma once
#include<iostream>

template <class T> 
class node {
public:
    T data;
    node* next;
};

template <class T> 
class Stack {

private:

    node<T> *_top;
    int _size;

public:

    // construct-destruct
    Stack();
    Stack(Stack<T>&);
    ~Stack();

    // stack functions
    void push(T);
    void pop();
    T top();

    // utility
    void clear();
    int size();
    bool isEmpty();
    void reverse();

    // print functions
    void printStack();
    void printStackCustom(std::string sep=",", std::string end="\n", std::string stackStart="[", std::string stackEnd="]");

    // friend functions
    // template problem with friend functions
    // https://stackoverflow.com/questions/4660123/overloading-friend-operator-for-template-class/4661372#4661372
    template <class U> 
    friend std::ostream& operator<< (std::ostream&, Stack<U>&);
};



// construct-destruct
template<class T>
Stack<T>::Stack() {
    _top = NULL;
    _size = 0;
}

template<class T>
Stack<T>::Stack(Stack<T> &oldStack) {
    _top = NULL;
    _size = 0;

    if(oldStack._top != NULL){

        Stack<T> tempStack;
        node<T> *temp = oldStack._top;
        while(temp != NULL) {
            tempStack.push(temp->data);
            temp = temp->next;
        }

        temp = tempStack._top;
        while(temp != NULL) {
            push(temp->data);
            temp = temp->next;
        }

        tempStack.~Stack();
    }
}

template<class T>
Stack<T>::~Stack() {
    clear();
}



// stack functions
template <class T>
void Stack<T>::push(T data) {
    node<T> *temp = new node<T>;
    temp -> data = data;
    temp -> next = _top;
    _top = temp;
    _size++;
}

template <class T>
void Stack<T>::pop() {
    if(_top != NULL){
        node<T> *temp = _top;
        _top = _top -> next;
        delete temp;
        _size--;
    }
    else{
        throw std::string("Stack is empty");  
    }
}

template <class T>
T Stack<T>::top() {
    if(_top != NULL){
        return _top->data;
    }
    else{
        throw std::string("Stack is empty");  
    }
}



// utility
template <class T>
void Stack<T>::clear(){
    while(_top != NULL){
        node<T> *temp = _top;
        _top = _top -> next;
        delete temp;
    }
    _size = 0;
}

template <class T>
int Stack<T>::size() {
    return _size;
}

template <class T>
bool Stack<T>::isEmpty() {
    if(_top != NULL){
        return true;
    }
    else{
        return false;
    }
}

template<class T>
void Stack<T>::reverse() {
    if(_top != NULL){

        node<T> *temp = _top;
        node<T> *deleter = temp;

        // deatach top
        _size = 0;
        _top = NULL;

        while(temp != NULL) {
            push(temp->data);
            
            deleter = temp;
            temp = temp->next;
            delete deleter;
            
        }

        delete temp;

    }
}



// print functions
template <class T>
void Stack<T>::printStack() {
    printStackCustom();
}

template <class T>
void Stack<T>::printStackCustom(std::string sep, std::string end, std::string stackStart, std::string stackEnd) {

    if (_top == NULL) {
        std::cout << stackStart << stackEnd << end;
    }
    else {
        std::cout << stackStart;
        node<T> *temp = _top;
        while(temp->next != NULL){
            std::cout << temp->data << sep;
            temp = temp->next;
        }
        std::cout << temp->data << stackEnd << end;
    }

}



// friend functions
template <class T>
std::ostream& operator<< (std::ostream &out,  Stack<T> &stack){
    stack.printStackCustom(",", "", "[", "]");
    return out;
}
