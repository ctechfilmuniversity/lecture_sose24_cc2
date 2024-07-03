**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Malte Hillebrandt | malte.a.hillebrandt@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*  

---

# UNREAL Engine & C++

This document contains a very brief first introduction into C++ in Unreal Engine, what you need to know and where you can start looking for further information.

## UE Source Code & Documentation

You can access [UE's source code repository](https://github.com/EpicGames/UnrealEngine) on Github and look into the implementation of UE. Therefore you have to connect your Github account with EpicGames's Github repository. Checkout the instruction pages here:

- https://github.com/EpicGames
- https://www.unrealengine.com/de/ue-on-github

With this access, you can also gain access to many more information on UE specifics:

- [Programming and Scripting in Unreal Engine](https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-programming-and-scripting?application_version=5.4)
- [Development Setup](https://dev.epicgames.com/documentation/en-us/unreal-engine/setting-up-your-development-environment-for-cplusplus-in-unreal-engine?application_version=5.4)
- [Working with the GitHub source code distribution](https://dev.epicgames.com/documentation/en-us/unreal-engine/downloading-unreal-engine-source-code?application_version=5.4)
- [Unreal Engine C++ API Reference](https://dev.epicgames.com/documentation/en-us/unreal-engine/API?application_version=5.4)

Here, it is in particular important to have a solid understanding of C++, project and application building, as well as development environment setup. UE developer's documentation "[Programming with C++](https://dev.epicgames.com/documentation/en-us/unreal-engine/programming-with-cplusplus-in-unreal-engine)" contains a corresponding disclaimer. 

## Development Basics

### Compilation & Build Process

UE continuously reloads and recompiles the source code whenever you save your file. You do not have to build the code in the respective IDE. Should that NOT work, you can always compile by clicking the Recompile and Reload Icon in the bottom right corner, third from the right by default.

### IDE Integration

You can access your IDE under `Tools` in the editor's menu bar and change the IDE settings or IDE completely in the preferences menu under `Edit > Settings or Preferences > General > Source Code`.


## UE C++ Project

### Setting Up a C++ Project

When creating a new project, no matter if based on a template or not, be sure to check `C++` instead of `Blueprint` in the Project Defaults.

### From Code to Game

A **C++ class** can be used as a **Blueprint** which can become an object **instance** in the game

- C++ Actor class -> Blueprint basis -> game object instance

Put differently, a C++ class will be the parent of a blueprint which is instanced in the 3D world. All C++ functions can be executed by the Instance(s) in the Unreal Engine 3D project.


### How to Integrate an Actor into the Game?

#### 1. Create a C++ Class: 

`Tools > New C++ CLass`

The selected code editor will open and you can select a class type and further specify your class. 

There are two central gameplay classes in UE worth mentioning here: `Actors and Component classes`

> **A prefix**: Extend from the base class of spawnable gameplay objects. These are **Actors**, and can be spawned directly into the world. (see [UE documentation](https://dev.epicgames.com/documentation/en-us/unreal-engine/gameplay-classes-in-unreal-engine))
>
> **U prefix**: Extend from the base class of all gameplay objects. These cannot be directly instanced into the world; they must belong to an Actor. These are generally objects like **Components**. (see [UE documentation](https://dev.epicgames.com/documentation/en-us/unreal-engine/gameplay-classes-in-unreal-engine))


In fact, `AActor` class derives from `UObject` class, which is the base class for all classes in UE. Also, blueprints are basically derived from C++ classes. This is important to keep in mind when specifying access levels.

#### UCLASS, UPROPERTY, UFUNCTION

In order to connect C++ class and blueprint script and allow for using the functionality inside the blueprint, make sure you learn about the UE macros `UCLASS`, `UFUNCTION` and `UPROPERTY` keywords and how to further specify them.

To access `UFUNCTION` and `UPROPERTY` of the C++ class within a blueprint later on (expose in the editor), properties have to be set accordingly. This is achieved by specifying the macros with certain `metadata`. For instance, a UFUNCTION can be `BlueprintCallable`, a UPROPERTOY could be set to `EditAnywhere`. 

- [Read more on metadata, macros and specifiers](https://dev.epicgames.com/documentation/en-us/unreal-engine/metadata-specifiers-in-unreal-engine) 


#### 2. Create a Blueprint from the C++ Class: _*Content Browser > + Add > Blueprint Class*_ then pick your C++ class as parent class!

Afterwards you'll be able to edit the Blueprint. Functions and variables written in C++ and exposed to the Blueprint Editor with the appriate meta data specification will now be accessible.

#### 3. Instancing the Blueprint into the Level

Of course, it's possible to create an Instance of the Blueprint programmatically as well, but you can just drag & drop it into the level editor.


# Further Reading

- [UNREAL Engine C++ Guide (intro)](https://www.tomlooman.com/unreal-engine-cpp-guide/)
- [UNREAL C++ Examples](https://www.unrealexamples.com)