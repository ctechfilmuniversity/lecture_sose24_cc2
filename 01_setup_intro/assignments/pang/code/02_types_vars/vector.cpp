// Based on https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm
// 


#include <iostream>
#include <vector>
#include <string>

// using namespace std; means that you will use
// all functions & objects from the namespace
// std without explicitely referencing it
// with std::cout or std::vector
using namespace std;


// The following code example shows how to use the generic container "vector", which implements an array data type.
// In the example, the generic type is specified as a vector of integer values. 

// TODO: How could you specify the vector so that it stores floating point values or string values?

int main()
{
    
    // create a vector that stores int values 
    vector<string> vec;
    
    // display the original size of vec
    cout << "vector size = " << vec.size() << endl;
    
    // push 5 values into the vector
    for(int i = 0; i < 5; i++)
    {
        vec.push_back("string" + to_string(i + 1)); // add 1 to 5 to the vector
    }
    
    // display extended size of vec
    cout << "extended vector size = " << vec.size() << endl;
    
    
    
    // access 5 values from the vector using the []-operator
    // or the at() function -- the latter is recommended because it checks
    // whether a value exists whereas [] does not
    for(int i = 0; i < 5; i++)
    {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
        cout << "value of vec.at(" << i << ") = " << vec.at(i) << endl;
    }
    
    
    // use the generic index operator "iterator" to access the values
    // (the use of iterators is similar to the use of pointers)
    // use the dereference operator "*" to de-reference the iterator and
    // access the value at which the iterator is pointing at
    vector<string>::iterator v = vec.begin();
    
    while( v != vec.end())
    {
        cout << "value of v = " << *v << endl;  // dereference the element
        v++; // increment the iterator so that it points to the next element
    }
    
    
    v = vec.begin();    // reset the iterator to the beginning
    while( v != vec.end())
    {
        // before erase iterator v points to an element ...
        cout << "Before erase value of v = " << *v << endl;
        
        // ... that is now removed from the vector
        vec.erase(v);
        
        // after erase was called, v points to next element in the vector
        cout << "After erase value of v = " << *v << "\n" <<  endl;
    }
    
    // display the emptied vector's size
    cout << "empty vector size = " << vec.size() << endl;
    
    return 0;
}
