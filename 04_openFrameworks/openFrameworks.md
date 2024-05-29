**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

**Table of Contents**
1. [What is openFrameworks?](#what-is-openframeworks)
   1. [openFrameworks and Processing](#openframeworks-and-processing)
   2. [openFrameworks SDK](#openframeworks-sdk)
   3. [The ofApp Build Process](#the-ofapp-build-process)
      1. [openFrameworks Folder Structure](#openframeworks-folder-structure)
      2. [ProjectGenerator](#projectgenerator)
      3. [openFrameworks Addons](#openframeworks-addons)
2. [Debugging](#debugging)
3. [Reading Material](#reading-material)

---

<!-- # Learning Objectives

- Getting an overview of openFrameworks
- Understanding the ProjectGenerator / IDE project file use
- Building and modfying a first openFrameworks app -->

# What is openFrameworks?

[openFrameworks](https://openframeworks.cc) is free, open source C++ software development kit (SDK) that takes a development approach similar to the Processing environment. Interestingly, both toolkits [originate from the Massachusetts Institute of Technology (MIT)](https://openframeworks.cc/ofBook/chapters/foreword.html). The openFrameworks SDK targets easy development of **real-time** and **close-to-the-hardware applications** and is primarily designed for use in creative and experimental projects. It is cross-platform and supports systems such as OS X, Windows, Linux, iOS, Android & Linux ARM devices such as Raspberry Pi. 

## openFrameworks and Processing

openFrameworks does not come with an integrated development environment (IDE) right away like Processing does. Instead, openFrameworks comes with a set of **C++ source files** (comprised of header *.h and definition *.cpp files) and system-dependent **pre-compiled libraries** (file extensions *.a on macOS, *.lib on Windows) among other files. These have to be processed as part of a compilation and build process which results in an  openFrameworks application. The resulting application **binary or executable** can be launched by the operating system (OS) as a standalone application and runs independently from the development environment. 

Processing, in contrast, is implemented in Java and thus builds on the Java Virtual Machine. Consequently the resulting application sketch requires the Processing IDE for launching and running the sketch. This can be more convenient in many cases but has its limitations when it comes to real-time applications and time consuming computations in general. Since recently Processing sketches can be exported as standalone applications, too. 

## openFrameworks SDK

In the context of platform-dependent development with openFrameworks, it will be helpful to develop an understanding of the following terms:

* The term **software interface** is a general description for how software programs can interact and communicate with each other, exchange data or execute functions. 

* The term **application programming interface** (**API**) is a formal description of a software interface. It is used to specify a certain part of an application program that allows other programs to connect with it.

* The term **software development kit** (**SDK**) describes a set of software interaces as well as additional development tools that support application programmers to develop and implement a software application. Additional development tools might, for example, be APIs, documentation, example code, precompiled libraries, scripts or executables. 

---

The following diagram illustrates the different soft- and hardware layers and their relationships in the context of openFrameworks. The blue connection points can be considered software interfaces:

![System_overview_of](imgs/diagram_system_overview_of.png)

Imagine you would like to implement an application that allows you to record incoming audio from your soundcard. On macOS you could use functionality provided by [Core Audio](https://developer.apple.com/library/archive/documentation/MusicAudio/Conceptual/CoreAudioOverview/Introduction/Introduction.html#//apple_ref/doc/uid/TP40003577-CH1-SW1) which represents the standard macOS software interfaces for audio development. On Windows platforms different software interfaces exist that allow you to implement how your application connects with soundcards and audio interfaces. Here you could use functionality provided by **Directsound** or **WASAPI** (Windows Audio Session API) which are part of the [Windows Core Audio APIs](https://docs.microsoft.com/en-us/windows/win32/coreaudio/core-audio-apis-in-windows-vista). The same applies for other devices like graphics cards, webcams as well as certain functionality handled by the operating system.

Since it can be rather tedious for an application developer to take care of all of the individual APIs themselves, certain **software development kits** package multiple APIs and useful functionality into a uniform set of functions. openFrameworks does exactly that. It takes care of creating a graphical window, listening for mouse and keyboard events, processes incoming and outgoing audio streams, 3d graphics, image and video processing, and many more. This way, developers can start with expressing their ideas fairly quickly and at the same time work with an optimal connection to their hardware resources. 


## The ofApp Build Process

In order to build an openFrameworks application, an **ofApp**, you have to initiate the compilation, linking and building of the ofApp and ensure to integrate all required source files properly. The required source files are contained in the different folders of the openFrameworks SDK. The openFrameworks folder structure thus is essential for a successful build process.

### openFrameworks Folder Structure

The following diagram illustrates the folder structure of openFrameworks. This file and folder paths inside of the main openFrameworks folder must not be changed in order to avoid any problems during the build process:

![System_overview_of](imgs/ofx_structure.png)


In the main folder you will find documentation, sample projects and additional functionalities, e.g. summarized in the form of software libraries in the “libs” folder, addons that you can extend, or even the executable file ProjectGenerator, which is a helpful tool for creating new applications.

### ProjectGenerator

The openFrameworks ProjectGenerator is a standalone application that comes with the SDK. Its main purpose is:

- to automatically create new project files for your IDE,
- to update existing project files with the current folder structure,
- to include available addons to the project files.

<!-- Check out this screencast to learn how to use the ProjectGenerator (openFrameworks version 0.11.0):

*Attention: The video may take a couple of minutes to load.*
[![ofProjectGenerator](imgs/screencast.png)](https://owncloud.gwdg.de/index.php/s/mquFo9hIpdorIfY) -->

### openFrameworks Addons

openFrameworks is also highly extensible and provides a dedicated mechanism to involve additional functionality through the use of [ofxAddons](https://ofxaddons.com/categories). These are usually open source and add specific or custom functionality to the SDK. Addons are generally built and maintained by members of the openFrameworks community. The downside here is that not all of the addons are maintained continuously. Hence, several addons are outdated and no longer compatible with the latest openFrameworks version. Once you understand how C++ and openFrameworks work, you can workaround this and update an outdated ofxAddon yourselves ;-)
<!-- 

### The ofApp

The ofApp is the default application class of openFrameworks that provides you with all of the necessary functionality to create and build an openFrameworks application binary. In this next screencast, we will develop a first custom ofApp application and take a closer look at the different aspects of the ofApp class. By default, an ofApp is comprised of three files:

- main.cpp - This file contains the C++ main() function
- ofApp.h - The header file that stores the software interface of an ofApp
- ofApp.cpp - The definition file that stores the implementation details of an ofApp -->

--- 

# Debugging

Debugging is a development process used to analyze the source code during runtime. This can be very helpful to understand 

- How is the sequence of execution of, i.e., functions in the binary?
- What are the values currently being stored in or assigned to a variable?
- What kind of objects are being launched and used inside of the application?

In order to debug a application binary, a **debug version** has to be built in contrast to a **release version**.

Most important debug functions are 

- reviewing the **call stack** which represents the sequence of execution of functions
- **continuing program execution**
- **stepping over** a statement or expression
- **stepping into** a function
- **stepping out** of a function

<!-- Check out this next screencast to learn how to **debug in XCode**. 
*Attention: The video may take a couple of minutes to load.* -->

[![debugging](imgs/screencast.png)](https://owncloud.gwdg.de/index.php/s/C4MdwBTcd9C7zQN)

In the screencast you also learned about how to print information to the console. Check this link to recap how to use the C++ Standard Library and **[std::cout](http://www.cppforschool.com/tutorial/input-output-statement-in-cplusplus.html)**.


Debugging in Visual Studio Community is similar but comes with a slightly different UI. There is additional material available on how to start **debugging with Visual Studio Community** prepared for you in this tutorial:

[![building an ofExample](imgs/tutorial.png)](additional_material/debugging.md)



# Reading Material

- [openFrameworks folder structure](https://openframeworks.cc/ofBook/chapters/setup_and_project_structure.html)
- [openFrameworks Functions: setup, update, and draw](https://openframeworks.cc/ofBook/chapters/how_of_works.html)
