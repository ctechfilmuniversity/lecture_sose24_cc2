// Created with support from ChatGPT


#include <iostream>

// Function to demonstrate pass-by-value
void passByValue(int x) {
    x = 100;
    std::cout << "Inside passByValue: x = " << x << std::endl;
}

// Function to demonstrate pass-by-reference
void passByReference(int &x) {
    x = 100;
    std::cout << "Inside passByReference: x = " << x << std::endl;
}

// Function to demonstrate pass-by-reference
void passByConstReference(const int &x) {
    int xIn = x;
    xIn += 50;
    std::cout << "Inside passByConstReference: xIn = " << x << std::endl;
}

// Function to demonstrate pass-by-pointer
void passByPointer(int *x) {
    *x = 100;
    std::cout << "Inside passByPointer: *x = " << *x << std::endl;
}

int main() {
    int a = 10, b = 20, c = 30;

    std::cout << "Before passByValue: a = " << a << std::endl;
    passByValue(a);
    std::cout << "After passByValue: a = " << a << std::endl;
    
    std::cout << " " << std::endl;

    std::cout << "Before passByReference: b = " << b << std::endl;
    passByReference(b);
    std::cout << "After passByReference: b = " << b << std::endl;
    
    std::cout << " " << std::endl;
    
    std::cout << "Before passByConstReference: b = " << b << std::endl;
    passByConstReference(b);
    std::cout << "After passByConstReference: b = " << b << std::endl;
    
    std::cout << " " << std::endl;

    std::cout << "Before passByPointer: c = " << c << std::endl;
    passByPointer(&c);
    std::cout << "After passByPointer: c = " << c << std::endl;

    return 0;
}
