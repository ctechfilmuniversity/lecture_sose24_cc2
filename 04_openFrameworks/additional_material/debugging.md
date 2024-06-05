
**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*    
Anna Brauwers | anna.s.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---


# Debugging

Debugging is a development process used to analyze the source code during runtime. This can be very helpful to understand 

- How is the sequence of execution of, i.e., functions in the binary?
- What are the values currently being stored in or assigned to a variable?
- What kind of objects are being launched and used inside of the application?

## General Tactics

There are several debugging tactics you might want to look into and get yourselves familiar with:

- [LearnCpp: Debugging Tactics](https://www.learncpp.com/cpp-tutorial/basic-debugging-tactics/)

## IDE Debugger

In order to debug a application binary with an integrated debugger that comes with your IDE, the binary has to be built as a **debug version**. Usually, your IDE will set the **target** to "debug" by default. During the build process, additional information useful to debug the code will be added to the executable. In contrast, you can set the target to "release" and build a **release version**. The executable will not contain any additional information and is usually smaller in size.

Most important debug functions are 

- reviewing the **call stack** which represents the sequence of execution of functions
- **continuing program execution**
- **stepping over** a statement or expression
- **stepping into** a function
- **stepping out** of a function

To learn more about debugging with an integrated debugger, checkout this documentation: 

- [LearnCpp: Using an integrated debugger](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-stepping/)

