
#include "ascii.h" 
#include <iostream> 
#include <fstream>
#include <thread>
#include <chrono> 
#include <stdlib.h> 

using namespace std;

void printAsciiArt(const vector<string>& art) {

    for (const string& line : art) {
        cout << line << endl;
    }
}

void printColorAsciiArt(const std::vector<std::string>& art, int colorCode) {
    std::string color;
    switch (colorCode) {
    case 1:
        color =  system("Color 0A"); // Red : "\033[31m"
        break;
    case 2:
        color =  system("Color E4"); // Green: "\033[32m"
        break;
    case 3:
        color = system("Color B5"); // Blue: "\033[34m"
        break;
    case 4:
        color = system("Color DE"); //"\033[33m"
        break;

    default:
        color = "\033[0m"; 
        break;
    }

    for (const std::string& line : art) {
        std::cout << color << line << "\033[0m" << std::endl; 
    }
}

vector<string> readAsciiArtFromFile(const string& filename) {


    vector<string> art;
    ifstream inFile(filename);
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            art.push_back(line);
        }
        inFile.close();
        cerr << "ASCII Art successfully read from " << filename << endl;
    } else {
        cerr << "Error opening file: " << filename << endl;
    }

    return art;
}

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
        system("cls"); // Clear the console (for UNIX/Linux/macOS). Use "cls" for Windows

        printAsciiArt(faceClosedEye);
        this_thread::sleep_for(chrono::milliseconds(200)); // Pause for 200 milliseconds
        system("cls"); // Clear the console (for UNIX/Linux/macOS). Use "cls" for Windows
    }
}