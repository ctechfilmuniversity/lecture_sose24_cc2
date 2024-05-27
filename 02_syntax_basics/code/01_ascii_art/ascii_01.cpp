/*
The Ascii Art examples have been created with the help of ChatGPT and was adapted.

This example requires additional functionality. We need the possibility to write characters
to the console, organize the characters, and store the actual character values. To achieve all
of this, we use

iostream    > The I/O stream class and provides functionality 
                to input and output data from and to the command line console
                https://cplusplus.com/reference/istream/iostream/?kw=iostream
vector      > The generic vector container that stores and organizes the data; in contrast to
                classical arrays, vectors have the capability to change in size
                https://cplusplus.com/reference/vector/vector/?kw=vector
string      > The string class data type that takes care of combining sets of single characters 
                https://cplusplus.com/reference/string/string/?kw=string
*/

#include <iostream> 
#include <vector>
#include <string>


// Function to print the ASCII art
void printAsciiArt(const std::vector<std::string>& art) {

    for (const std::string& line : art) {
        std::cout << line << std::endl;
    }
}


int main() {
    // Define the ASCII art
    std::vector<std::string> smileyFace = {
        "  *****  ",
        " *     * ",
        "*  O O  *",
        "*   ^   *",
        "* \\___/ *",
        " *     * ",
        "  *****  "
    };

    // Print the ASCII art
    printAsciiArt(smileyFace);

    return 0;
}
