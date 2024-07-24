
# This is a Makefile that helps us organizing the build process. Here we specify 
# the components that are part of the build process, i.e. the include files, 
# the object files, and the target that we are building together with the
# compiler and linker specifications.
# To use the Makefile, simply type `make` to the command line.

# See also: https://makefiletutorial.com


# Specifiy the compiler & linker:
CXX = g++

# Specify the C++ standard version:
CXXFLAGS = -std=c++17

# Specify the path to any additional include files:
#INC = -I  

# Specify the build target:
TARGET = addition


# Specify the dependencies required to compile, link and build the target:

# target : dependencies
# 	command
addition: # main.o add.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o add.o

main.o: main.cpp 
	$(CXX) $(CXXFLAGS) $(INC) -c main.cpp

add.o: add.cpp 
	$(CXX) $(CXXFLAGS) $(INC) -c add.cpp

