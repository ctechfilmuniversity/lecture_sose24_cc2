**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

--- 

# Setup Guide
### Installation of openFrameworks and IDEs

In order to build your own openFrameworks applications, you will need to download the **openFrameworks SDK** as well as an **IDE** for your platform. Follow the description below. If you have questions and problems during the installation, make use of the [openFrameworks forum](https://forum.openframeworks.cc) which contains lots of useful hints and discussions.


## Integrated Development Environment

In this course, we will use **Visual Studio Code** ("VS Code") for macOS and **MS Visual Studio Community 2019** ("Visual Studio" or simply "vs") for Windows platforms. 

Central features of the IDEs are:
1. A **text editor** usually with syntax highlighting and IntelliSense.
2. A **debugger** to step through the code during runtime and in order to identify mistakes and bugs.
3. A **build environment** that processes, compiles, and links the source code.

The IDEs feature more than that, for instance, they support version control, deployment facilities or additional code optimization tools. 

<!-- *Note: As mentioned earlier, other IDEs and platforms will work with openFrameworks as well but will require you to take care of the setup and processing yourselves. Visual Studio Code is a very good alternative that works on both platforms, macOS and Windows. However, at the moment it is [not possible to use the latest debugger on macOS Catalina with Visual Studio Code](https://github.com/microsoft/vscode-cpptools/issues/3829).* -->

## macOS and Xcode and Visual Studio Code
If you are working on **macOS**, you will need to download and install **Xcode**, **Xcode's command line tools** as well as **Visual Studio Code**.
- Download [openFrameworks](https://github.com/openframeworks/openFrameworks/releases/download/0.12.0/of_v0.12.0_osx_release.zip)
  - extract all files from the downloaded folder in `user/developer/openFrameworks/macOS...`
- Follow the instructions [here](https://openframeworks.cc/setup/xcode/) to setup Xcode
- For the VS Code setup, follow these [instructions](https://openframeworks.cc/setup/vscode/) 
- Recommended extensions for VS Code: `C/C++ Extension Pack` + `C/C++`


- **If you prefer a video tutorial for setting up openFrameworks**:  [this video to get a first impression of how to work with openFrameworks on macOS](https://www.youtube.com/watch?v=rplUouqg8mc) 

Skip the next section and continue with the **IDE Project Files** section below.


## Windows and Visual Studio Community

If you are working on Windows, you will need to install **MS Visual Studio Community 2019**.   
- Download openFrameworks for Windows [here](https://github.com/openframeworks/openFrameworks/releases/download/0.12.0/of_v0.12.0_vs_release.zip)
  - extract the folder and put it to your documents folder of your computer. You can rename it to openFrameworks if you like.
- Follow the instructions [here](https://openframeworks.cc/setup/vs/) to download and setup Visual Studio


- **If you prefer a video tutorial for setting up openFrameworks** (note, this is for Mac but should look similar on windows):  [this video to get a first impression of how to work with openFrameworks](https://www.youtube.com/watch?v=rplUouqg8mc)


## IDE Project Files

Each major IDE uses a particular type of project file, i.e. 

- MS Visual Studio uses ***.sln**, 
- Xcode uses ***.xcodeproj**

to keep track of all 

- sources files, 
- required header files, 
- additional library files and 
- compiler, linker, and builder parameter settings.

In contrast to pro IDEs such as Xcode or MS Visual Studio, **MS Visual Studio Code** (VS Code) circumvents a specific project file and instead uses several files and the C++ extensions to keep track of the above. In VS Code,

- the ***.code-workspace** file is used to track the source files
- the **.vscode** folder (that appears within every folder that tracks *.cpp files) introduces 
  - **c_cpp_properties.json** to take care of file pathes to sources files, include files, library files, etc.
  - **launch.json** to take care of debugger settings
  - **tasks.json** to take care of compiler and build settings

  

### Issues with openFrameworks & VS Code

VS Code used with openFrameworks can give the following output error on macOS:

*Unable to resolve configuration with compilerPath "/usr/local/bin/gcc-8".
Using "/usr/bin/clang" instead.*

To resolve, change the compiler path in the c_cpp_properties.json file the following settings:

            "compilerPath": "/usr/bin/clang",
            //"compilerPath": "/usr/local/bin/gcc-8",
            "cStandard": "c11",
            "cppStandard": "c++17"


<!-- ## CMake, Makefiles, IDEs, etc.

How are make, makefile and clang related?

- The command "make" in combination with a "Makefile" represents a build system that compiles, links and builds the code.

- Xcode (as well as Microsoft Visual Studio or VS Code) is an integrated development environment that allows to control a build system using an GUI; Xcode uses the Clang frontent and LLVM as backend compiler

- openFrameworks uses Clang as well as with c++17 and clang-x64 -->



# Further Reading for the Advanced Reader

- [C++ & VS Code](https://code.visualstudio.com/docs/languages/cpp)
- [VS Code & C++ FAQ](https://code.visualstudio.com/docs/cpp/faq-cpp)
- [Building an Application in C++ & VS Code](https://devblogs.microsoft.com/cppblog/building-your-c-application-with-visual-studio-code/)
- [Improving the Launch.json file](https://blogs.msdn.microsoft.com/brian_farnhill/2017/09/27/using-the-launch-json-file-in-vs-code-for-improved-powershell-debugging/)
- [VS Code, CMake & LLDB](https://medium.com/audelabs/c-development-using-visual-studio-code-cmake-and-lldb-d0f13d38c563)
