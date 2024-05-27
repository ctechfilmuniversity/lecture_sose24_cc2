
**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*    
Anna Brauwers | anna.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

**Table of Contents**
1. [C++ Basics: Types and Variables](#c-basics-types-and-variables)
   1. [Static Typing vs Dynamic Typing](#static-typing-vs-dynamic-typing)
   2. [Built-in Types](#built-in-types)
   3. [User-defined Types](#user-defined-types)
2. [Program Components: Variables \& Functions](#program-components-variables--functions)
   1. [Variables](#variables)
      1. [Declaration](#declaration)
      2. [Definition](#definition)
         1. [Uniform Initialization](#uniform-initialization)
         2. [Initialization \& Assignment](#initialization--assignment)
         3. [Copy Assignment](#copy-assignment)
   2. [Functions](#functions)
      1. [The main Function](#the-main-function)
      2. [Declaration](#declaration-1)
      3. [Definition](#definition-1)
3. [Code Organization](#code-organization)
   1. [Sequential Code Execution](#sequential-code-execution)
   2. [Header and Definition Files](#header-and-definition-files)
4. [Reading Material](#reading-material)

--- 

# C++ Basics: Types and Variables


C++ is  a **statically** or **strongly typed** programming language which means that all data types (i.e., int, float, bool, ...) provided by the language have to be specified at **compile-time**. Specifically this means:

- **Variables** have to be associated with a specific data type.
- The type of the variable must be specified at **compile-time** and cannot change during **run-time**.
- The compiler will issue an **error** when you try to assign values to variables of incompatible types. 

This is not to be confused with the concept of **constants** which simply means that the value assigned to a variable or cannot be changed during run-time.

To specify variables in C++, you would have to write the following code:

```cpp
int myVar;              // specify that myVar is of type "int"
std::string myOtherVar; // specify that myOtherVar is of type "std:string"

myVar = 10;
myOtherVar = "hello";
myVar = myOtherVar;     // not working, compile time error
```

To improve the handling for the developer, a new type specifier **auto** has been introduced to C++. This type specifier supports *automatic type deduction*:

```cpp
auto myVar;         // not working, compile time error - this way the 
                    // compiler does not know what type is going to be
                    // stored in myVar

auto myVar{10};             // initialize the variable with the type
auto myOtherVar{"hello"};   // initialize the variable with the type
myVar = myOtherVar;  // still not working, compile time error
```

## Static Typing vs Dynamic Typing

Benefits of static typing are support of fast program execution and detection of conceptual flaws. During compilation the compiler checks whether all associations between data types and variables and values stored in the variables are correct and issues an error if this is not the case. Moreover, the memory required by the variables is allocated early-on and does not need to be checked and re-allocated dynamically. The "downside" is that the developer needs to be aware of handling types correctly and meaningfully.

In contrast to static typing, **dynamic typing** such as in JavaScript does not associate data types with variables. Variable types are evaluated at **run-time** and types associated with a variable can change during run-time as well. 
The upside is that the developer does not have to take care of data types at all. The downside is, however, that run-time errors might occur, program execution can be slower, and  conceptual clarity might suffer.

See this example for a dynamically typed language like Javascript and compare the example with the above.

```javascript
let myVar;
let myOtherVar;

myVar = 10;
myOtherVar = "hello";
myVar = myOtherVar;
```

## Built-in Types

C++ supports **built-in types** like integers, floating point or boolean values and **user-defined types** which can be designed and specified by the programmers. When you start working with data types in C++, consider them as *digital representations of man-made concepts*. For example, the data type **int** represents the concept of **integers**, i.e., whole numbers. The data type **int&** represents the concept of an *alias* or **reference to an integer**. 

Don't worry if you do not understand reference types right now. We will look at them closely in the upcoming sessions. Also, please note that we will not look into all of the available types and combinations of types in order not to overwhelm you right aways. To find out more about C++ types, checkout the online resources provided or [take a first tour of C++](https://isocpp.org/images/uploads/2-Tour-Basics.pdf).



Fundamental built-in types in C++ are types that represent mathematical concepts like numbers, logical operations and language / text concepts:

- **A Boolean type** called **bool** that represents either **true** or **false**  
- **Integer types** such as **int** that represent whole numbers like -3, -2, -1, 0, 1, 2, 3, ...
- **Floating point types** such as **float** that represent decimal numbers like -2.0, -1241.14523, 2345124.567435, -20.74, ...

```c++
int i{-120};
float f{3.145678};
bool b{true};
```


The newly introduced type specifier **auto** allows for automatic type deduction as described earlier. This means, the data type of the variable defined as *auto* is automatically deduced from the value assigned to it. The **auto** type specifier can be very helpful to simplify the source.  At the same time, [variables of type auto](https://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/) have to be initialized upon
creation like so:

```c++
auto i{-120};
auto f{3.145678};
auto b{true};
```

<!-- There is a type **void** that represents absence of information, i.e., the concept of **nothingness**. It is mostly used in the context of functions.

```c++
void myFunctionName () {
    // this function does not return a value
}
``` -->

In addition, C++ provides types that represent concepts of memory allocation, memory access & aliasing. These types are the reason why C++ is considered a language close-to-the-hardware. They are especially important when it comes to real-time programming and memory management and we will take our time in a future session to explore them closely:

- **Reference types** such as **int&**
- **Pointer types** such as **int\***

```c++
int size{450};             // variable "size" of type "int" stores a value of "450"
int& size_alias{size};     // variable "size_alias" of type "reference to int" is exactly the same as "size"
int* size_ptr{&size};      // variable "size_ptr" of type "pointer to int" stores the address in memory of "size"
```


## User-defined Types

User-defined types allow programmers to conceive and develop their own custom types and to translate theoretical concepts into software systems. Most prominent user-defined types in C++ are 

- **enum** for enumeration of items of type integer
- **struct** for structure of items of different type
- **class** for classifying simple and complex concepts 


The **enum type** can be used to group a list of symbolic constants (all of type integer) like so:

```c++
// this preprocessor directive tells the compiler to include
// the "iostream" header file and its functionality. "iostream" is part
// of the C++ Standard Library (STL)
#include <iostream> 

enum Color {    // define an enum called "Color"

    red,        // == 0
    yellow,     // == 1
    green       // == 2
};

// In the main function, create a variable of user-defined type "Color". 
// Initialize "myColor" with "yellow".
// Print "myColor" to the command line (which is evoked by calling "std::cout").
// The command line will print "1".
int main( ) {
    
    Color myColor{yellow};
    std::cout << "myColor value " << myColor << std::endl;
}
```

The **struct type** can be used to combine different data types inside of one struct type. Accessing the different types inside a struct can be accomplished with the help of the "." operator:

```c++
#include <iostream> 

struct Point {

    int x;
    int y;
    bool isVisible;
};

// In the main function, declare a variable "myPoint" of type "Point".
// Specify the different member variables of "myPoint".
// Print out the boolean variable's value to the command line.
int main( ) {
    
    Point myPoint;      
    myPoint.x = 45;
    myPoint.y = 45;
    myPoint.isVisible = false;

    std::cout << "Is my point visible? " << myPoint.isVisible << std::endl;
}
``` 

The **class type** allows to define custom types by supporting 

- a combination of different data types 
- an integration of member functions 
- different access levels specified by **public**, **protected**, and **private** 

We will look into classes more closely in the next two sessions. For now, take note that the typical **class prototype** is usually specified in the **header file (*.h)** and contains all of the relevant variable and function **declarations**. The actual implementation 
is defined in the **definition** or **cpp file (*.cpp)** which usually contains all of the variable and function definitions. 

Exemplary myClass.h:
```c++
class myClass {

public:
    // member functions which describe the functionality of the class
    void setCoordinates(int xCoord, int yCoord);
    bool getVisibility();
    // ...

private: 
    // initialized member variables which can be of any type
    int x{0};
    int y{0};
    bool isVisible{false};
};
```

Exemplary myClass.cpp:
```cpp
#include "myClass.h"


void myClass::setCoordinates(int xCoord, int yCoord) {

    x = xCoord;
    y = yCoord;
}

bool myClass::getVisibility(){

    return isVisible;
}

// ...
```

# Program Components: Variables & Functions

## Variables

Variables are associated with a certain data type in the code.
There are different forms of variable initialization in C++ that you will find in most C++ source code. Therefore, a brief overview of the most important and commonly used forms of how to assign a value to a variable is presented in the following.

### Declaration

A **variable declaration** informs the compiler about the existence of a variable. Most compilers automatically assign a random value to a declared variable. This might result in undefined behavior depending on how stable the source code is. It is therefore recommended to always initialize variables.

Declarations of **auto** variables are not allowed. This is becaues the compiler deduces the actual type of the variable automatically during compile time and based on the value assigned to the variable.
```cpp
bool test; 
auto grade;         // this will result in a compile time error 
auto grade2 {8};    // this works but is an initialization instead of a declaration
```


### Definition

A **variable definition** is the process of storing an actual value in the variable. In C++, there are basically two ways to define a variable, i.e., initialization and assignment:

- **Initialization** describes the process of specifying the value of a variable upon its creation in a one-step process.
- **Assignment** assigns a value to a variable that has already been created in a second step, this is a two-step process. 
 
To avoid undefined behavior, always initialize a variable.

#### Uniform Initialization

```c++

// Uniform initialization
// This is the new way to initialize variables in C++. 
// Upon variable creation, a value is directly stored in its memory.

float grade {5.0}; 
auto grade {5.0}; 
```

#### Initialization & Assignment
  
```cpp
// Initialization & assignment
// This is the classic way to initialize variables in 
// older C++ versions, it is slower than uniform 
// initalization but still widely used. The variable is 
// created first and in a second step a variable is 
// copied into its memory.

int years = 4;     
auto years = 4 + 3; 
```

#### Copy Assignment 

```cpp

// Copy assignment -> uses the "="-operator
// When changing the value of a variable, the new value 
// is copied into the variable's slot in memory. 

auto years {5};
years = 12;         // copy assignment
```


## Functions

Functions are essential building blocks of a computer program. They group statements into logical units and help organize the code. 
In C++, a typical function would look like this:

```c++
bool myFunction(int x, int y /* .. more or less or none */ ) {

    bool myBoolVariable = true;

    // do something with x and y and myBoolVariable
    
    return myBoolVariable;
}
```

As such, a function is defined by the **function name**,  the **return type**, the **parameter list** (which can range from no parameter to multiple parameters), and the **function body** as is also illustrated in the following diagram:



### The main Function

The [**main** function](https://en.cppreference.com/w/cpp/language/main_function) is a unique function that every C++ program must have. It is the starting point for every C++ program and is the first function that is being executed when the application binary gets launched. The return value of the **main** function is usually an error code. 

```c++
#include <iostream>

int main () {

    std::cout << "Hello, CTech World" << std::endl;
    return 0; // return value is used to return an error code
}
```


### Declaration

A **function declaration** informs the compiler about the existence of a function similar to a variable declaration. It is defined by **function prototype** which includes

- the function name, 
- return type, 
- parameter list and 
- semicolon - not to forget -

but no function body like so:

```c++
bool myFunction(int x, int y);
```

### Definition

A **function definition** in contrast additionally includes the function body like so: 

```c++
bool myFunction(int x, int y) {

    bool myBoolVariable = true;

    // do something with x and y and myBoolVariable
    
    return myBoolVariable;
}
```
Hence, similar to a variable's definition, the function definition provides the actual functionality required when calling the function. By the way, when calling a function the values passed to the function are called **function arguments**. Review the following example:

```cpp
// ...
int xVal{50};
int yVal{40};
bool result = myFunction(xVal, yVal);
// ...
```

The variables xVal and yVal are referred to as the function arguments passed on from the caller to the function. 


# Code Organization

## Sequential Code Execution

The separation of function declaration and function definition is primarily due to the [sequential execution of C++ source](https://www.learncpp.com/cpp-tutorial/introduction-to-the-compiler-linker-and-libraries/) code. It helps to better organize the code. Programmers can simply list all of the functions used in the programm at the top of the source code (or in the header file) in the form of function declarations. This way, the compiler knows exactly what kind of functions have been defined - or are supposed to be defined - before evaluating the actual function definitions. 

Check out the following examples for an illustration of the approach.

In the following source code example,  the **main()** function initializes two integer variables and calls a function called **add(...)**. The latter adds both values and returns the result. In **Example 1**, everything works fine. The compiler reads the source code from top to bottom. It encounters add(...), notes down where it finds it, and then goes to main(). When the compiler reaches the function body of main(), it encounters the function call for add(...) and can confirm its existence. No compiler error will be thrown.

```cpp
// Example 1: This example will compile fine.

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int first{12};
    int second{45};

    int result = add(first, second);

    return 0;
}

```

In the following source code **Example 2**, the compiler will throw an error. This is because when it reaches main(), it does not know about the existence of the add(...).

```cpp
// Example 2: This example will throw a compiler error!!

int main()
{
    int first{12};
    int second{45};

    int result = add(first, second);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

```


Finally, in the last source code **Example 3**, everything works fine again. The add(...) function has been declared at the top of the source code. As a result, the compiler knows about its existence when it reaches main() function.

```cpp
// Example 3: This example will compile fine.

int add(int x, int y);  // function declaration

int main()
{
    int first{12};
    int second{45};

    int result = add(first, second);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

```

To this context let me add another aspect: Review **Example 3** one more time. Imagine the function definition of add(...) would not have been added to the code. It is the declaration alone that is available. In this case, the IDE would not throw a compiler error, but a linker error. Because the actual object code required to execute the add(...) function is not available. 

## Header and Definition Files

Please not that the separation of declaration and definition described earlier is an essential aspect of source code management as well as software design in C++ as it supports separating interface design and implementation details. The introduction of header (\*.h) and definition (\*.cpp) files can be considered a continuation of this separation. This separation of code into header and definition files applies the approach to source code management and deployment.


- **The header file**  is used **to declare** all of the functionality. 
- **The definition file**  is used **to define and implement** all of the funtionality.

Referring back to the previous example, you would split the source code into two files, a header file, e.g., add.h and a cpp file, e.g., main.cpp. Then, in order to actually include the declaration of the add-function into main.cpp, at the top of the main.cpp file you have to put the **#include** preprocessor directive. The following code snippets illustrate the approach:

```cpp
// add.h

int add(int x, int y);
```

```cpp
// main.cpp

#include add.h   

int main()
{
    int first{12};
    int second{45};

    int result = add(first, second);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}
```

During the build process, the preprocessor searches for these kinds of directives and automatically includes the content of the corresponding header file into the cpp file. Hence, after the preprocessing step, the main.cpp would look exactly like in the code snippet of **Example 3** above.

This approach is used to manage larger software projects and to clearly distinguish between software interface and implementation details. We will look at it closely and by example of ofApp in the next section.


# Reading Material

- [cpplearn.com](https://www.learncpp.com): 
  - Check chapters 1 & 2 on C++ syntax
  - Check chapter 3 on debugging
- [Statically vs Dynamically Typed Languages](https://stackoverflow.com/questions/1517582/what-is-the-difference-between-statically-typed-and-dynamically-typed-languages)
- [Variables and Types in C++](http://www.cplusplus.com/doc/tutorial/variables/)
- [Header and Definition Files](https://www.learncpp.com/cpp-tutorial/header-files/)
