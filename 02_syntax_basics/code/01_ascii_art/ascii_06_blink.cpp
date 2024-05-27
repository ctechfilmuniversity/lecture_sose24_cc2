/*
The Ascii Art examples have been created with the help of ChatGPT.

This example requires additional functionality. We need the possibility to write characters
to the console as well as to read from a file, organize the characters, and store the actual character values. 
Moreover, we create a blinking eye effect. Therefore, we need to introduce a timer as well as functionality
that allows us to clear the console. 
To achieve all of this, we use

iostream    > The I/O stream class and provides functionality 
                to input and output data from and to the command line console
                https://cplusplus.com/reference/istream/iostream/?kw=iostream    
vector      > The generic vector container that stores and organizes the data; in contrast to
                classical arrays, vectors have the capability to change in size
                https://cplusplus.com/reference/vector/vector/?kw=vector
string      > The string class data type that takes care of combining sets of single characters 
                https://cplusplus.com/reference/string/string/?kw=string
thread      > The thread functinoality that supports us to work with one or more threads; 
                together with chronos, it allows us to put execution on hold for a specific amount of time
                https://cplusplus.com/reference/thread/
                https://cplusplus.com/reference/thread/this_thread/sleep_for/
chrono      > The time library of C++; to access its functionality use std::chrono:: which represents
                an original namespace.
                https://cplusplus.com/reference/chrono/
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// Function to print the ASCII art to the console
void printAsciiArt(const vector<string>& art) {
    for (const string& line : art) {
        cout << line << endl;
    }
}

// Function to create the blinking effect
void blinkingEyeEffect() {
    vector<string> faceOpenEye = {
        "\t  *****  ",
        "\t *     * ",
        "\t*  O O  *",
        "\t*   ^   *",
        "\t* \\___/ *",
        "\t *     * ",
        "\t  *****  "
    };

    vector<string> faceClosedEye = {
        "\t  *****  ",
        "\t *     * ",
        "\t*  O -  *",
        "\t*   ^   *",
        "\t* \\___/ *",
        "\t *     * ",
        "\t  *****  "
    };

    for (int i = 0; i < 10; ++i) { // Blink 10 times
        printAsciiArt(faceOpenEye);
        this_thread::sleep_for(chrono::milliseconds(500)); // Pause for 500 milliseconds
        system("clear"); // Clear the console (for UNIX/Linux/macOS). Use "cls" for Windows

        printAsciiArt(faceClosedEye);
        this_thread::sleep_for(chrono::milliseconds(200)); // Pause for 200 milliseconds
        system("clear"); // Clear the console (for UNIX/Linux/macOS). Use "cls" for Windows
    }
}

int main() {

    // Run the blinking eye effect
    blinkingEyeEffect();

    return 0;
}