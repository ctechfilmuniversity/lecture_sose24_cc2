/*
The Ascii Art examples have been created with the help of ChatGPT.

This example requires additional functionality. We need the possibility to write characters
to the console, organize the characters, and store the actual character values. To achieve all
of this, we use

iostream    > this is part of the C++ Input/Output library, which takes care of data streams (https://cplusplus.com/reference/iolibrary/)   
                iostream in particular ensures that we can input and output data to the command line console
                https://cplusplus.com/reference/istream/iostream/?kw=iostream
fstream    > this is part of the C++ Input/Output library, which takes care of data streams (https://cplusplus.com/reference/iolibrary/)
                fstream in particular ensures that we can input and output data from and to files
                https://cplusplus.com/reference/fstream/fstream/?kw=fstream      
vector      > this is a generic (array) container that stores and organizes our data; in contrast to
                classical arrays, vectors have the capability to change in size
                https://cplusplus.com/reference/vector/vector/?kw=vector
string      > this is the data type that takes care of combining sets of single character in a string 
                https://cplusplus.com/reference/string/string/?kw=string

*/

#include <iostream> 
#include <fstream>  
#include <vector>   
#include <string>   

using namespace std;

// Function to print the ASCII art to the console
void printAsciiArt(const vector<string>& art) {
    for (const string& line : art) {
        cout << line << endl;
    }
}

// Function to write the ASCII art to a file
void writeAsciiArtToFile(const vector<string>& art, const string& filename) {
    ofstream outFile(filename);
    
    if (outFile.is_open()) {
        for (const string& line : art) {
            outFile << line << endl;
        }
        outFile.close();
        cout << "ASCII art successfully written to " << filename << endl;
    } else {
        cerr << "Error opening file: " << filename << endl;
    }
}

int main() {
    // Define the ASCII art
    vector<string> smileyFace = {
        "  *****  ",
        " *     * ",
        "*  O O  *",
        "*   ^   *",
        "* \\___/ *",
        " *     * ",
        "  *****  "
    };

    // Print the ASCII art to the console
    printAsciiArt(smileyFace);

    // Write the ASCII art to a file
    string filename = "ascii_art.txt";
    writeAsciiArtToFile(smileyFace, filename);

    return 0;
}