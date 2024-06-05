**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.s.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

# Code Examples

The current directory contains the following content: 

- **01_my_ascii_art folder**: the example shows how ascii art work with openFrameworks
- **02_polyline**: the example shows how to draw simple lines with openFrameworks
- **03_basic_drawing**: the example combines various ways to draw simple shapes and more complex forms and illustrates different functions openFrameworks provides for you
- **04_error_sines**: the folder contains 4 examples to train your understanding of bugs; the examples will not build unless you fix them
- **05_mesh_creator**: the example contains code from an openprocessing and p5.js implementation that you have to re-implement to see how it works with openFrameworks

--- 

## Exercises

### 1 Exercise

Familiarize yourselves with the code examples and the use of the ProjectGenerator. Create project files for your platform for all code examples and build the examples. Beware that the error_sines will cause compiler or linker errors that you need to fix. Review the code of examples 01 and 02.

--- 

### 2 Exercise

Example 03 contains various ways to draw simple shapes and more complex forms with openFrameworks. 

- Review the code and familiarize yourselves with the different drawing examples and with the ofApp concept of setup(), update() and draw(). 
- Clean up the code and instead of implementing all drawing examples in draw()
  - think of functions that you could use instead
  - think of potential function arguments you might need to hand over data or information 
  - make sure that draw() is easily readable and comprehensible

```cpp

// ... 

void draw() {

  ofBackground(0);
  drawThisThing(..);
  drawThatThing(..);
  finallydrawThisThing(..);

}

// ...
```


--- 


### 3 Exercise 

Build the error_sines examples and fix the errors. Discuss in your team what is wrong and note it down in the fixed code examples. 

--- 

### 4 Exercise 

#### 4.1 CTechies

Review example 05 mesh creator. This example is taken from openprocessing and p5.js. Open the links given in the code and run the examples. In your teams, discuss first without reading the code what is happening and think about how an implementation could look like. Take down notes for that.

- now, you can either try to implement your own idea given the application sketch 
- or you can check the processing / js code and re-implement it with openFrameworks.

#### 4.2 Non-CTechies

Create your own new ofApp sketch and implement an example of an interactive graphic. Use the code examples that were introduced during the lesson and review the [graphics script](../of_graphics.md) for more input.