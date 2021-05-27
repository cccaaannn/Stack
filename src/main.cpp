#include <iostream>
#include "example.h"

int main() {

    Stack<int> stack;

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


    system("pause");
    return 0;
}

