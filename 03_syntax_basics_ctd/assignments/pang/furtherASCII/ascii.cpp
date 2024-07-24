
#include "ascii.h" 
#include <iostream> 
#include <fstream>
#include <thread>
#include <chrono> 
#include <cstdlib>
#include <ctime>

#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN
#define NOMINMAX

using namespace std;

void printAsciiArt(const vector<string>& art) {

    for (const string& line : art) {
        cout << line << endl;
    }
}

void printColorAsciiArt(const vector<string>& art, int colorCode) {
    string color;
    switch (colorCode) {
    case 1:
        color =  "\033[31m"; // Red 
        break;
    case 2:
        color =  "\033[32m"; // Green
        break;
    case 3:
        color = "\033[34m"; // Blue: "\033[34m"
        break;
    case 4:
        color = "\033[33m"; 
        break;

    default:
        color = "\033[0m"; 
        break;
    }

    for (const string& line : art) {
        cout << color << line << "\033[0m" << endl; 
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

// Function to play music
void playMusic(const string& filename) {
    cout << "Playing music file: " << filename << endl; // Debug message
    if (PlaySoundA(filename.c_str(), NULL, SND_FILENAME | SND_ASYNC)) {
        cout << "Music is playing: " << filename << endl;
    }
    else {
        cerr << "Error playing music: " << filename << endl;
        // Fall back to system command
        string command = "start /MIN wmplayer \"" + filename + "\"";
        system(command.c_str());
    }
}


// Function to get random ASCII art
vector<string> getRandomAsciiArt() {
    vector<string> files = {"random_1.txt", "random_2.txt", "random_3.txt", "random_4.txt"};
    int randomIndex = rand() % files.size();
    return readAsciiArtFromFile(files[randomIndex]);
}

// Function to get random music
string getRandomMusic() {
    vector<string> musicFiles = {"music_1.wav", "music_2.wav", "music_3.wav", "music_4.wav"};
    int randomIndex = rand() % musicFiles.size();
    return musicFiles[randomIndex];
    //cerr << "Music successfully play from " << filename << endl;
}