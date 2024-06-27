// make_shared example
#include <iostream>
#include <memory>
#include <vector>

int main () {

    // The classical way to use pointers in the context of dynamic memory allocation (now not recommended anymore):
    // - create pointer `fooold` of type pointer-to-int
    // - allocate dynamic memory with `new` operator 
    // - initalize the allocated memory with `10` and assign the memory block's address to `fooold`
    int* fooold = new int(10);    

    // The classical way to create arrays
    // - create pointer `fooold2` of type pointer-to-int
    // - allocate dynamic memory with `new` operator, construct 10 int objects (the objects are undefined, you must initialize the 
    //   objects / elements of the array manually!), and return a pointer to the first element of the array.
    int* fooold2 = new int[10];

    // Memory management of dynamically allocated memory
    // Whenever you use `new` in C++, you dynamically allocate memory on the heap (rather than on the stack).
    // Memory stored on the heap is not automatically de-allocated. Therefore, you have to manually de-allocate
    // the allocated memory with the `delete`operator:
    delete fooold;      // delete or free the allocated memory
    delete[] fooold2;   // delete[] must be used in the context of arrays to free the allocated memory 
 

    // The C++ standard introduced pointer templates such as std::shared_ptr or std::unique_ptr which work exactly like
    // the classical way of using pointers with the `*` sign. However, you do not have to take care of allocating or 
    // de-allocating memory. The std::shared_ptr takes care of that. 
    // In order to allocate memory dynamically, the std introduced the std::make_shared function. It is used to create 
    // a std::shared_ptr to a single object, for instance. If you want to use a pointer to an array, though, you have 
    // to work with vectors:
    std::shared_ptr<int> foo = std::make_shared<int> (10);          // same as fooold
    //std::shared_ptr<int> fooo = std::make_shared<int> [10];       // does not work in C++
    std::shared_ptr< std::vector<int> > foovec = std::make_shared< std::vector<int> > (10);   // same as fooold2;
    
    std::shared_ptr<int> foo2 (new int(10));    // same as fooold and foo
    auto bar = std::make_shared<int> (20);      // same as fooold, foo and foo2

    auto baz = std::make_shared<std::pair<int,int>> (30,40); // creates a pointer of type pair<int,int> and initializes it with a pair with values (30,40)

    std::cout << "*foo: " << *foo << '\n';
    std::cout << "*bar: " << *bar << '\n';
    std::cout << "*baz: " << baz->first << ' ' << baz->second << '\n';

    return 0;
}
