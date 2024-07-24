// Ascii Art example adapted from ChatGPT example


#include <iostream>
#include <vector>
#include <string>
#include "ascii_art.h"

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

    std::vector<std::string> hi = {
        "#    # # ",
        "#    # # ",
        "###### # ",
        "#    # # ",
        "#    # # ", 
        "#    # # "

     };

     std::vector<std::string> ok = {

        "  ______   __    __  ",
        " /         |\\  /  \\ ",
        "|  $$$$$\\| $$ /  $$ ",
        "| $$  | $$| $$/  $$  ",
        "| $$  | $$| $$  $$   ",
        "| $$  | $$| $$$$$\\   ",
        "| $$__/ $$| $$ \\$$\\  ",
        " \\$    $$| $$  \\$$\\ ",
        "  \\$$$$$  \\$   \\$$\\ "
        };

     // Store ASCII arts in a vector
     std::vector<std::vector<std::string>> asciiArts = { smileyFace, hi, ok};

          // Print the options for the user
    std::cout << "Choose an ASCII art:" << std::endl;
    std::cout << "1. Smiley Face" << std::endl;
    std::cout << "2. HI" << std::endl;
    std::cout << "3. OK" << std::endl;

      // Get user input
    int choice;
    std::cin >> choice;

    // Print the ASCII art based on the user choice
    switch(choice){
        case 1:
        printAsciiArt(smileyFace);
        break;

       case 2:
        printAsciiArt(hi);
        break;

        case 3:
        printAsciiArt(ok);
        break;

        default:
        std::cout << "Invalid choice." << std::endl;
       
    }
    

    return 0;
}
