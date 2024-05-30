//
//  ascii.cpp
//  example1
//
//  Created by abrennec on 30.05.24.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

#include "ascii.hpp"

using namespace std;

void asciiArtApp::run() {
    
    std::vector<std::string> faceOpenEye;
    std::vector<std::string> faceClosedEye;
    
    createAsciiObject(faceOpenEye, faceClosedEye);
    blinkingEyeEffect(faceOpenEye, faceClosedEye);
}

void asciiArtApp::createAsciiObject(std::vector<std::string>& open, std::vector<std::string>& closed) {

    open = {
        "\t  *****  ",
        "\t *     * ",
        "\t*  O O  *",
        "\t*   ^   *",
        "\t* \\___/ *",
        "\t *     * ",
        "\t  *****  "
    };

    closed = {
        "\t  *****  ",
        "\t *     * ",
        "\t*  O -  *",
        "\t*   ^   *",
        "\t* \\___/ *",
        "\t *     * ",
        "\t  *****  "
    };
}


// Function to create the blinking effect
void asciiArtApp::blinkingEyeEffect(std::vector<std::string>& faceOpenEye, std::vector<std::string>& faceClosedEye) {

    for (int i = 0; i < 10; ++i) { // Blink 10 times
        
        printAsciiArt(faceOpenEye);
        
        this_thread::sleep_for(chrono::milliseconds(500)); // Pause for 500 milliseconds
        #if defined(_WIN32) || defined(_WIN64)
            system("cls");
        #else
            system("clear");
        #endif

        printAsciiArt(faceClosedEye);
        
        
        this_thread::sleep_for(chrono::milliseconds(200)); // Pause for 200 milliseconds
        #if defined(_WIN32) || defined(_WIN64)
            system("cls");
        #else
            system("clear");
        #endif
    }
}

// Function to print the ASCII art
void asciiArtApp::printAsciiArt(const std::vector<std::string>& art) {

    for (const std::string& line : art) {
        std::cout << line << std::endl;
    }
}


// Function to write the ASCII art to a file
void asciiArtApp::writeAsciiArtToFile(const vector<string>& art, const string& filename) {
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


// Function to read ASCII art from a file
vector<string> asciiArtApp::readAsciiArtFromFile(const string& filename) {
    
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
