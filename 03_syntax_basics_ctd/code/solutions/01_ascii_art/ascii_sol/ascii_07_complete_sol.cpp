

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

// Function to read ASCII art from a file
vector<string> readAsciiArtFromFile(const string& filename) {
    vector<string> art;
    ifstream inFile(filename);
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            art.push_back(line);
        }
        inFile.close();
    } else {
        cerr << "Error opening file: " << filename << endl;
    }

    return art;
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

int main() {

    // Functions must be short and do only one thing
    // 

    // Ask the user on the command line if they want to use
    // > the pre-defined art or
    // > provide an ascii art file to read from
    // Setup the ascii art 
    // Start the blinking effect

    return 0;
}