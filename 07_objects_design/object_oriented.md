<!-- ---  
title: Creative Coding II
author: Angela Brennecke
affiliation: Film University Babelsberg KONRAD WOLF
---   -->

**Creative Coding II**

Lecturer: Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de   

---- 

**Table of Contents**  
1. [Object-oriented Programming](#object-oriented-programming)
   1. [Central Principles of OOP](#central-principles-of-oop)
   2. [Programs, Objects, Instances and Classes](#programs-objects-instances-and-classes)
      1. [Key Concepts in OOP](#key-concepts-in-oop)
      2. [Examples](#examples)
   3. [Classes \& Objects](#classes--objects)
      1. [Class Members](#class-members)
      2. [Constructor \& Destructor](#constructor--destructor)
      3. [Object Instantiation](#object-instantiation)
   4. [Access Levels](#access-levels)
   5. [Summary of OOP](#summary-of-oop)
2. [Reading Material](#reading-material)

---

# Object-oriented Programming

Object-oriented programming (OOP) is a programming paradigm based on the concept of "objects," which can contain data and code to manipulate that data. OOP focuses on creating reusable and modular code by defining **custom** or **user-defined types** called classes and the methods that can be applied to them. 

## Central Principles of OOP

The four main principles of OOP are:

1. **Encapsulation**: This principle involves bundling the data (in the form of member variables) and methods (in the form of member functions) that operate on the data into a single entity called a **class**. Encapsulation helps protect the data from unauthorized access and modification by controlling access through public methods (getters and setters among others).

2. **Abstraction**: Abstraction means specifying and representing the essential features of an object while hiding the unnecessary details. It allows programmers to work at a higher level of complexity by focusing on **what** an object does rather than **how** it does it.

3. **Inheritance**: Inheritance is a mechanism where a new class (derived class) is created from an existing class (base class). The derived cclass inherits functionality and data from the parent or base class, allowing for code reuse and the creation of a hierarchical relationship between classes.

4. **Polymorphism**: Polymorphism allows objects of different classes to be treated as objects of a common base class. It is achieved through overriding member functions (i.e., a derived class provides a specific implementation of a member function that is already defined in its base class) and function overloading (multiple functions have the same name but different parameters within the same class).

## Programs, Objects, Instances and Classes

In OOP, a program is structured as a collection of objects that interact with each other. Each object is an instance of a class, and classes can be organized into hierarchies to represent relationships and shared behavior.

### Key Concepts in OOP

- **Class**: A blueprint or recipe for real objects. It defines a type of object according to the data (member variables) it holds and the operations (member functions) it can perform.
- **Object**: An instance of a class. It represents a specific entity with data and behavior as defined by its class and can
- **Member function (aka method)**: A function defined within a class that operates on instances of that class.
- **Member variable (aka attribute)**: A variable defined within a class that holds data specific to instances of that class.
- **Constructor**: A special method used to initialize new objects of a class.
- **Destructor**: A special method used to deconstruct objects of a class and to ensure that all dynamic data of the object is removed and set free.

### Examples

OOP helps in organizing code in a way that is easy to manage, extend, and reuse, making it a popular paradigm in modern software development. An **object** represents a certain concept or idea and, in doing so, groups or **encapsulates** all functionality and properties required to represent that concept or idea into a user-defined data type called a **class**. 

For example, imagine you wanted to draw a simple snake character inside of your ofApp. You could go about this task by applying several function calls to ofDrawCircle, ofDrawRectangle, ofDrawTriangle, and so on in order to draw a snake onto the screen. Your draw() function would probably become quite large. 

Now imagine you wanted to draw a additional things like a food object or a snake's house as well, or a second snake. You would have to add additional function calls to ofDrawRectangle, for example, extending your draw() function further. The readability of your code would probably suffer and any interaction with the small snake character would probably be rather tedious to implement as well. 

 With OOP you might instead define a **user-defined data type**, a class called "snake" and move all of the functionality required to draw and represent your snake into the class definition like so:  
 
 ```cpp
// The class declaration is usually specified in a header 
// file, i.e., "ofSnake.h"

// The keyword "class" followed by the class name 
// identifies the new user-defined type

class ofSnake {

    // lets define the member functions of the snake and its member data to give it behavior

    public: 

      void drawSnake(); 

      // ... 

    private:

      bool hasEaten{};

      // ...
};
```

The class itself is usually defined in a **header file** and groups all member variable and member function declarations. 

In the corresponding **cpp file** the member variables and member functions are being defined:

```cpp
// The class definition is usually specified in a 
// definition file like "ofSnake.cpp"

# include "ofSnake.h"

// ... 

void ofSnake::drawSnake() {

    // specify how to draw the snake
}

// ...

```

 Then, in ofApp.h, you would simply add a variable of type "ofSnake", instantiate it and call its' drawing routine, for example, like so:

```cpp
// ofApp.h

# include "ofSnake.h"

class ofApp : ofBaseApp() {

    // ....
    ofSnake mySnake;      // add a member variable
}
```

```cpp
// ofApp.cpp

// ...
void ofApp::draw() {

    mySnake.drawSnake();   // call the object's drawing routine
}

// ... 
```

In its essence, OOP is a very straightforward approach to software development which targets to simplify the development process. On a practical level, object-oriented design will help you to better organize your code, to make it more readable and to better categorize individual elements. 
On a software design level, object-oriented design will help you to reflect on your program from a conceptual point of view and to identify:
  - What kind of elements, components, or simply *objects* do you actually need and use?
  - How do they relate to each other?  
  - What kind of properties and what kind of functionality do they represent?


## Classes & Objects

Following [the explanation at cplusplus.com](http://www.cplusplus.com/doc/tutorial/classes/), *classes are user-defined data types in C++ and objects are instantiations of classes. If you think of variables, a class would be the variable type whereas the object itself would be the actual variable that can be used in the code.* 

Classes are blueprints of objects. Based on **a class definition**, **various object instances** can be created. This is just like with any other data type. For example, consider an **integer**. In your code, you can use several variables of type integer. Likewise you can instantiate several objects of type **class** ... or, as you might as well say, you can use several variables of type **class**.

### Class Members

Every class is specified by

* **Class name** (which is used like any other type specifier, e.g., int, float, or bool)
* **Member variables**, 
* **Member functions**.


**Member variables** are defined inside of the class definition to represent the actual data members and / or data structures required and used by the class.

**Member functions** are defined inside of the class definition to represent all of the functionality to access and manipulate the data members and to interact with the object itself.

 ```cpp
class ofSnake {

  public: 

    // ... 

    // specify all functionality of the "object"
    // that indicates how to use it in the program as
    // member functions

    void updateSnake();
    void drawSnake();
    void death();
    void setDir(int x, int y);
    bool eat(ofVec2f foodPos);

    // ...

private:

    // specify all properties of the snake "object"
    // as member variables
    
    float xSpeed{};
    float ySpeed{};
    
    int cellSize{};
    
    bool hasEaten{};
    bool isDead{false};
    
    ofColor color{};

    // ...
};
```


Additionally, classes consist of 
* **constructor & destructor**, specific member functions
* specification of **access levels** (private, protected, public) 
* potentially, specifications of **relationships** to other classes (e.g., through inheritance, friendships, etc.)


### Constructor & Destructor

Every class has two special member functions called 
**constructor** and **destructor**. As the name suggests, the constructor is required to **construct** the object and to initialize all of the data members of the class whereas the destructor is required to properly **destroy** the object and its data members when its lifetime ends. This constructor is always called when an object of that class is being instantiated. The destructor is called when the object's lifetime ends.

 ```cpp
// The declaration and definition of class members inside
//  "pet.h" and "pet.cpp"

class ofSnake {

  public: 
    // class constructors 
    // default constructor (that can be omitted)
    ofSnake();

    // custom or user-defined constructors
    ofSnake(int theHeight);     
    ofSnake(int theHeight, ofColor theColor);

    // !! this would result in a compiler error because it 
    // equals the first custom constructor "ofSnake(int theHeight);" - 
    // constructor function prototypes MUST differ
    ofSnake(int theWidth);      
    // ...   

    // class destructor
    // there is only ONE destructor per class which gets called
    // when the object runs out of scope / its lifetime ends
    ~ofSnake();

    // ...
};
```

- **The default constructor**: If the class does not specify a constructor, the **compiler generates a default constructor automatically**. This is the case, for example, in the ofApp class. The default constructor initializes all data members to their default values.

- **The user-defined constructor**: Every class can also **have (additional) user-defined constructors** which can be used to directly initialize member variables to specific values other than the default values. The function prototypes of the constructors **must differ** from each other! 

- **The destructor**: Like the constructor, every class must specify a  destructor. If the class does not have an explicit default destructor, **the compiler generates one automatically**. Destructors are particularly important when a class member variable allocates dynamic memory — as we will see later. In general, the destructor takes care of cleaning up the object if that is required.

### Object Instantiation

Object instantiation is simply done by using the **class name** as type specifier and by associating a **variable** with an **object instance**. 
Through the **variable**, all member functions and member variables that are defined as "public" can be accessed using the "."-syntax like so:

```cpp
#include ofSnake.h

// for example, instantiate an object in main function
void ofApp::draw() {

    ofSnake aSnake;          // create an object instance

    aSnake.drawSnake();      // calling a public member function
    aSnake.hasEaten = false;
    aSnake.isDead = false; 

}

```

However, in the outlined class definition above, you would not be able to access the member variables "hasEaten" or "isDead" like this because they were declared **private**. 


## Access Levels

In C++, access to the data is restricted through access specifiers (`private`, `protected`, and `public`), ensuring that the internal state of an object is protected and can only be modified through well-defined interfaces.

In this sense, **access specifiers** help define different **access levels** that determine how the data members and function members be accessed **from outside of the class**. If no further specificaton is given in the class definition, all members will be under **private** access level. You can specify the following access levels:

- **Public** Every member variable and/or function defined under public can be accessed from outside of the class. 

- **Protected** Every member variable and/or function defined under protected can be accessed from inside of the class and from inside of the inherited class(es) only — not from outside of the class

- **Private** Every member definition in a class is declared as private by default — if not specified otherwise. Every member variable and/or function defined under private can only be accessed from inside of the class — not from outside of the class

In the following example, public and private access levels have been added to the class definition. This way, in the previous code example only the access of the "shapeIsRound" variable will cause a compiler error.

 ```cpp
// Reviewing access levels in the class 

class ofSnake {

  public: 

    // class constructors 
    // default constructor (that can be omitted)
    ofSnake();
    // custom or user-defined constructors
    ofSnake(int theHeight);     
    ofSnake(int theHeight, ofColor theColor);

    // class destructor
    ~ofSnake();

    
    // public member functions
    void updateSnake();
    void drawSnake();
    void death();
    void setDir(int x, int y);
    bool eat(ofVec2f foodPos);


private:

    // private member variables
    
    float xSpeed{};
    float ySpeed{};
    
    int cellSize{};
    
    bool hasEaten{};
    bool isDead{false};
    
    ofColor color{};

    // ...
};
```

Member variable "hasEaten" was specified as "private" and can not be accessed from outside of the class. The variable can only be accessed from inside of the class like so:

```cpp
#include ofSnake.h

// ...

void ofSnake::updateSnake () {

    // ... 

    if (hasEaten) {

      // ... 
    }
    else {

      // ... 
    }
}

// ...
```

## Summary of OOP

Object-oriented programming (OOP) is a programming paradigm that revolves around the concept of "objects." These objects can encapsulate data and the code that manipulates that data. OOP achieves this by defining data structures known as classes and the methods that can operate on them.

In OOP, a program is normally organized as a collection of interacting objects. Each object is an instance of a class, and classes can be structured into hierarchies to represent relationships and shared behaviors.

Many aspects of OOP aim for enhancing code robustness and manageability by restricting direct access to an object's critical components as well as supporting clear and understandable code design. A clear separation between the interface (public functions) and the implementation details (private data and functions) is a central aspect for it.

The primary goals of object-oriented programming are:
- To translate real-world concepts into digital representations.
- To reuse code efficiently by utilizing multiple objects of the same class without redundancy.
- To configure unique objects according to the specifications defined in their classes.
- To establish relationships and hierarchies among classes and their instances, reflecting complex systems and interactions.

# Reading Material

- [Object-oriented Programming (OOP) & openFrameworks/C++](https://openframeworks.cc/ofBook/chapters/OOPs!.html)
  - Note that this introduction is not flawless but it gives you a good idea about how OOP works with openFrameworks
- [Classes and Objects](http://www.cppforschool.com/tutorial/classobject.html) for an example of classes and objects.
- [Constructor & destructor](http://www.cppforschool.com/tutorial/constructor.html) to get a better understanding of the constructor and destructor functionality and use.

