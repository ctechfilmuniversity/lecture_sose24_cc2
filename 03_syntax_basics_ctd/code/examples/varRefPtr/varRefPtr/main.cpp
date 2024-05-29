
#include<iostream>

int main () {


    // First we declare and define an integer variable and check out what are references and pointers
    // associated to it
    int myAge = 45;
    
   // int& myAgeRef;
    std::cout << "myAge value: " << myAge <<  "  myAge address in memory: " << &myAge << std::endl;

    int& myAgeRef2 = myAge;
    
    std::cout << "myAgeRef2 value: " << myAgeRef2 <<  "  myAgeRef2 address in memory: " << &myAgeRef2 << std::endl;

    int* myPtrToMyAge = nullptr;
    
    std::cout << "myPtrToMyAge value: " << myPtrToMyAge <<  "  myPtrToMyAge address in memory: " << &myPtrToMyAge << std::endl;

    myPtrToMyAge = &myAge;
    
    std::cout << "myPtrToMyAge value: " << *myPtrToMyAge <<  "  myPtrToMyAge address in memory: " << &myPtrToMyAge << std::endl;

//    myPtrToMyAge = &myAgeRef2;
//    std::cout << "myPtrToMyAge value: " << myPtrToMyAge <<  "  myPtrToMyAge address in memory: " << &myPtrToMyAge << std::endl;

    
    // Now we see what happens if we change the values
    myAge = 567;
    std::cout << "myAge value: " << myAge <<  "  myAge address in memory: " << &myAge << std::endl;
    std::cout << "myAgeRef2 value: " << myAgeRef2 <<  "  myAgeRef2 address in memory: " << &myAgeRef2 << std::endl;
    std::cout << "myPtrToMyAge value: " << myPtrToMyAge <<  "  myPtrToMyAge address in memory: " << &myPtrToMyAge << std::endl;

    return 0;
}
