
<!-- ---  
title: Creative Coding II
author: Michael Witt
affiliation: Film University Babelsberg KONRAD WOLF
date: Summer term 23
---   -->

# Scope and Sequences

The most basic programming building block is the `sequence`. A sequence of instructions are simply a chain of definitions, commands, declarations etc. which are executed in order of appearance from top to bottom.

Take this example of 4 instructions that form a simple sequence.
```cpp
int a = 10;
int b = 20;

int result = a + b;

std::cout << "Calculation result ist: " << result << std::endl; 
```

A sequence can also be empty or consist of a single instruction. You can surround sequences with curly brackets (`{ }`) to generate a new `scope` for the sequence inside of it. Variables and constants defined inside a scope are only valid inside this scope. Once all instructions inside the sequence of the scope are executed all variables, constants, objects, etc. in it are released. 

Scopes can be nested by simply placing curly backets inside other curly brackets. An instruction inside a scope can always access all variables of this scope as well as all variables from surrounding outer scopes. However an outer scope can not access variables of an inner scope:

```cpp
// This works
int main()
{
    int a = 100;
    int b = 100;
    
    // New scope starts here
    {
        std::cout << "Calculation result ist: " << (a+b) << std::endl; 
    }

    return 0;
}

// This does not work
int main()
{
    // New scope starts here
    {
        int a = 100;
        int b = 100;
    }
    // Scope ends and scoped variables a and b cease to exist

    // Error - since a and b are unknown
    std::cout << "Calculation result ist: " << (a+b) << std::endl; 
    
    return 0;
}
```

A scope is a powerful tool if you want to create a temporary group of variables that should not interfere with other things outside of the scope. But be careful since scopes might cause some confusion when `re-defining` variables with already present names. Consider the following code:

```cpp
int main()
{
    int a = 100;
    int b = 100;
    
    {
        int a = 200;
        int b = 200;
        std::cout << "Calculation result ist: " << (a+b) << std::endl; 
    }

    std::cout << "Outer calculation result ist: " << (a+b) << std::endl; 

    return 0;
}
```

## Tasks

1. Try to compile and run the application. What is the output.
2. Explain your observation.

