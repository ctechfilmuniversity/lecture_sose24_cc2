**Creative Coding II | Summer Term 2024**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

Creative Coding II -- Introduction to C++ & openFrameworks

1. [Overview of the Course](#overview-of-the-course)
   1. [Organization](#organization)
   2. [Course Description](#course-description)
   3. [Method of Instruction](#method-of-instruction)
   4. [Syllabus](#syllabus)
   5. [Evaluation and Grading](#evaluation-and-grading)
2. [Communication \& Materials](#communication--materials)
   1. [Important Note for Non-CTechies](#important-note-for-non-ctechies)
3. [Assignments](#assignments)
4. [Literature \& Resources](#literature--resources)
   1. [Recommended Readings](#recommended-readings)
      1. [Books](#books)
         1. [Creative Coding](#creative-coding)
         2. [C/C++](#cc)
         3. [Software Design](#software-design)

---


# Overview of the Course

## Organization 

- Wednesdays and Thursdays 10:00 h - 13:30 h
- Module 5 | 3 SWS | 4 ECTS

## Course Description 

This course builds on the concepts presented in ‘Creative Coding I’ and introduces the programming language C++ as well as the software development toolkit [openFrameworks](http://openframeworks.cc), a creative coding toolkit dedicated to realtime development written in C++. In this course we are going to

- learn about the C++ programming language 
- introduce platform-dependent software development 
- work with an integrated development environment (IDE) 
- learn and explore object-oriented programming with C++
- look into software design aspects
- write code and work on small audio visual projects and exercises

**NOTE:** openFrameworks is comprised of a huge body of example projects as well as additional functionality (ofxAddons). During this course we will not be able to look into each and every aspect. Rather we will develop an understanding of the general development approach and dive into selected aspects. The main objective will be to establish common ground for understanding how software works on a computer and how it can be developed.
The overarching topic of the course **interaction and interfaces** which we will explore in larger and smaller projects and exercises. 

## Method of Instruction

This course will be very practice based and will use flipped classroom techniques. This means, you will receive a script or other learning materials that you will have to read at home to prepare the upcoming lesson. During that lesson, we will review central aspects of the provided material, clear up questions, and focus on practical coding exercises. Group work, aka teams of 2 or 3, will be a strong part of the lecture.


## Syllabus

*The syllabus is still subject to change.*

1. **Session (23.05.24): Setup and Introduction**
2. **Session (29.05.24): C++ Basics**
3. **Session (30.05.24): openFrameworks SDK**
4. **Session (05.06.24): Objects and Classes Design**
5. **Session (06.06.24): Objects and Classes Relationships**
6. **Session (19.06.24): Objects and Memory Management**
7. **Session (20.06.24): Practice and Review**
8. **Session (26.06.24): Special Topics I**
9.  **Session (27.06.24): Special Topics II**
10. **Session (03.07.24): Final Projects & Wrap-up**


## Evaluation and Grading

In order to pass the course, you need to collect 10 points. 
For CTech students there will be a grade. The grade will be based on the points collected for the homework assignments and the final assignment which will be a small project work. 

### Grade Breakdown <!-- omit in toc -->

* **50% - Homework assignments**
  * There will be 4 homework assignments that can be worked on individually or in a group (work distribution must be clearly defined by the group!)
  * For each submitted assignment, you can collect 3 points, 12 pts in total.
  * **Deadline**: You can submit session assignments up until July 31st. For late submissions, the total points will be reduced by 15%.
* **50% - Final assignment**
  * The final assignment will be the development of a C++ application, you can collect 12 points in total for the final assignment including 2 bonus points.
  * **Deadline**: You can submit session assignments up until September 30th. For late submissions, the total points will be reduced by 15%.
  * **Requirements and general distribution**:
      * Object-oriented system design (2 pts)
      * Use of an SDK (i.e., openFrameworks) (2 pt)
      * Code must be clean, application must built and run (2 pts)
      * Implementation of an own artistic idea or a pre-defined task (2 pts)
      * Documentation (2 pts)
        * Written description (md-file)
        * Video trailer (mp4, 30-90 secs max)

* The spectrum of the grades can be found in the "Rahmenordnung für Studium und Prüfungen für die Bachelor- und Masterstudiengänge der Filmuniversität Babelsberg KONRAD WOLF". 


---

# Communication & Materials

As a communication platform, we will use [GitHub.com](https://github.com/) to share code, lecture materials, comments, and submit homework and project assignments.

- [GitHub repository (public)](https://github.com/ctechfilmuniversity/lecture_creative_coding_2)

The repository will be used to share scripts (usually as readme.md) and slides, coding examples, homework and project materials. A Wiki may be used and maintained by the students to share information that might be useful for everyone such as useful links, and so on. 

To stay tuned with the materials, clone the main repo and get to know Github:

```
git clone https://github.com/ctechfilmuniversity/lecture_sose24_cc2

```

## Important Note for Non-CTechies

In CTech, we are regularly using Github to share documents and code. To get most out of the course and participate fully, you should be basically familiar with using Github as a version control system. Please make sure you have a Github account and follow these tutorials to get started with Github:

- [About Github and Git](https://docs.github.com/en/get-started/start-your-journey/about-github-and-git)
- [Github Account](https://docs.github.com/en/get-started/start-your-journey/creating-an-account-on-github)
- [Github workflow](https://docs.github.com/en/get-started/start-your-journey/hello-world)

Along with Github, you will need to understand the markdown file format. Please check out these links to get an understanding of Markdown, as well:

- [Markdown Guide](https://www.markdownguide.org)

Feel free to get in touch if you have further questions!

# Assignments

Please submit your assignments and exercise solutions to the assignments folder of the corresponding session, i.e., "01_intro". To do so, go to the assignments folder and create a folder. Name it **<my_last_name>** and put your results into that folder, for example, like so:

```
For any written assignments:
01_intro/assignments/<my_last_name>/solution.md

For any programming assignments:
01_intro/assignments/<my_last_name>/mySketch
                                bin/
                                src/
                                readme.md
                                addons.make
                                config.make
```

Make sure that you **do not** upload any IDE-based project files. To do so, add a **.gitignore** file to your **local cc2 repository**. This should not be uploaded. An example configuration might look like this and will be added to the repository:

```
# Example .gitignore file
# Configuration for C++ development

# Prerequisites
*.d
*~

/*/.DS_Store
.DS_Store
.gitignore

# Compiled Object files
*.slo
*.lo
*.o
*.obj

# Precompiled Headers
*.gch
*.pch

# Compiled Dynamic libraries
*.so
*.dylib
*.dll

# Compiled Static libraries
*.lai
*.la
*.a
*.lib

# Executables
*.exe
*.out
*.app

# Directories
obj/
.vs/

# IDE project files
*.sln
*.vcxproj*
*.xcodeproj/
*.code-workspace
*.xcconfig
*.vscode
*.plist

```


---

# Literature & Resources

## Recommended Readings

- [C++ für Hektiker](http://willemer.de/informatik/cpp/crash.htm) (Crash course in German)
- [learncpp](http://www.learncpp.com) -- Very good resource for beginners and experienced developers
- [isocpp](https://isocpp.org) -- The Standard C++ Foundation
- [ofBook](https://github.com/openframeworks/ofBook/tree/master/chapters) -- Very good starting point for openFrameworks.


### openFrameworks <!-- omit in toc -->


- [openFrameworks](https://openframeworks.cc/) -- All about openFrameworks.
- [openFrameworks Book](https://openframeworks.cc/ofBook/chapters/foreword.html)
- [openFrameworks Forum](http://forum.openframeworks.cc/) -- Communication tool for openFrameworks.
<!-- - Zach Lieberman: https://github.com/ofZach/RTP_SFPC_FALL19
- Tyler Henry: https://github.com/tyhenry/dt_openframeworks_2018
- Dan Wilcox: https://github.com/danomatika/CreativeCodingExamples
- We are no Computer: https://github.com/wearenocomputer/workshop -->

#### References, Tutorials, Community <!-- omit in toc -->
- [isocpp](https://isocpp.org) -- The Standard C++ Foundation
- [cplusplus](http://www.cplusplus.com/) -- Very good reference site with many examples.
- [cppreference](http://www.cppreference.com/) -- Advanced, very good reference site.
- [c/c++ by example](https://www.cbyexample.com) -- Goto coding examples
- [fluentcpp](https://www.fluentcpp.com) -- Very good website with a focus on programming design (advanced!).

---

### Books 

These are recommendations that will help you dive deeper into creative coding with openFrameworks as well as C++ programming. Take them as suggestions!

#### Creative Coding 

The following books provide interesting exercises and lots of food for thought on creative coding. Technologically, however, the openFrameworks versions used for the example code are outdated and may not work out-of-the-box.

- Denis Perevalov, Igor Tatrnikov (2015): openFrameworks Essentials. Packt Publishing. Birmingham, UK.
- Denis Perevalov (2013): Mastering openFrameworks: Creative Coding Demystified. Packt Publishing. Birmingham, UK.
- Joshua Noble (2009): Programming Interactivity. A Designer’s Guide to Processing, Arduino & openFrameworks. Sebastopol, CA: O’Reilly Media Inc.
- Ira Greenberg (2007): Processing: Creative Coding & Computational Art. Berkley, CA: Friends of ED/Apress Press.

#### C/C++  

The first two books will give you a solid understanding of everything C++. The last two books I recommend for intermediate and experienced C++ programmers.

- Bjarne Stroustrup (2013): The C++ Programming Language. Upper Saddle River, NJ: Pearson Education, Inc.
- Bjarne Stroustrup (2014): Programming. Principles & Practices Using C++. Upper Saddle River, NJ: Addison-Wesley.
- Scott Meyers („Effective C++“ series, advanced)
- Herb Sutter („Exceptional C++“ series, really advanced)
- [Free books](https://github.com/EbookFoundation/free-programming-books/blob/main/books/free-programming-books-langs.md#cpp)
- [Richard Halterman's book on C++](https://github.com/halterman/CppBook-SourceCode)

#### Software Design

If you want to dive even deeper into software design, these books might be of interest for you.

- Grady Booch (1994): Object-oriented Analysis and Design. Addison-Wesley. NY, USA.
- Robert C. Martin (2009): Clean Code. Prentice Hall. NY, USA.
- Robert C. Martin (2017): Clean Architecture. Prentice Hall. NY, USA.
