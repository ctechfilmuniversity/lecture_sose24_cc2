// Ascii Art example adapted from ChatGPT example


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
