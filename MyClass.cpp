#include "MyClass.h"
#include <iostream>

MyClass::MyClass() {}

void MyClass::printHello() {
    std::cout << "Hello from MyClass!" << std::endl;
}

int MyClass::addNumbers(int a, int b) {
    return a + b;
}
