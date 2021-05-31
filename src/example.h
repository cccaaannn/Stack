#include <iostream>
#include "Stack.h"
#include <time.h>

void example1();
void example2();

void runExample(int num){
    if(num == 1){
        example1();
    }
    if(num == 2){
        example2();
    }
}


void example1(){

    Stack<int> stack;

    try{
        std::cout << "Pushing elements to stack" << std::endl;

        stack.push(10);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.push(20);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.push(30);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.push(40);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.push(50);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.push(60);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.push(70);
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;

        std::cout << std::endl << "Printing stack" << std::endl;
        std::cout << stack << std::endl;

        std::cout << std::endl << "Poping elements from stack" << std::endl;

        stack.pop();
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.pop();
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;
        stack.pop();
        std::cout << "top: " << stack.top() << " size: " << stack.size() << std::endl;


        // copy constructor
        std::cout << std::endl << "Creating stack2 with copy constructor" << std::endl;

        Stack<int> stack2 = stack;

        std::cout << "stack: " << stack << std::endl;
        std::cout << "stack2: " << stack2 << std::endl;

        std::cout << std::endl << "Reversing stack2" << std::endl;
        stack2.reverse();
        std::cout << "stack2 reversed: " << stack2 << std::endl;

        std::cout << std::endl << "Clearing stack2" << std::endl;
        stack2.clear();
        std::cout << "stack2 cleared: " << stack2 << std::endl;

        std::cout << std::endl << "Pushing elements to stack2" << std::endl;

        stack2.push(10);
        stack2.push(20);
        stack2.push(30);
        stack2.push(40);
        std::cout << "stack2: " << stack2 << std::endl;


        // print options
        std::cout << std::endl << "Custom printing example" << std::endl;
        stack.printStackCustom(" -> ", "\n", "{", "}"); 
        
        stack.~Stack();
        stack2.~Stack();
    
        std::cout << std::endl;
    }
    catch(std::string e){
        std::cout << e << std::endl;
    }
    catch(...)  { 
        std::cout << "Default Exception" << std::endl; 
    } 
}

void example2(){

    std::cout << "String example" << std::endl;

    Stack<std::string> stack;

    stack.push("Stack");
    stack.push("From");
    stack.push("!");
    stack.push("World");    
    stack.push(" ");
    stack.push("Hello");

    std::cout << stack << " size: " << stack.size() << std::endl << std::endl;

    stack.~Stack();
}

