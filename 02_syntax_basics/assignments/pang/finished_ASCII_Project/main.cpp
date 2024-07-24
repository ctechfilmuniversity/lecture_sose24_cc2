
#include "ascii.h" 
#include <iostream> 

using namespace std;

void menu(){

    cout << "Choose an option:" << endl;
    cout << "1. Read and print ASCII art from a file" << endl;
    cout << "2. Get a blinking eye ASCII art" << endl;
    cout << "Enter your choice:" << endl;
}

int main() {
    int choice;
    menu();
    cin >> choice;

     switch (choice) {
        case 1: {
            string filename;
            cout << "Enter the filename: ";
            cin >> filename;
            vector<string> asciiArt = readAsciiArtFromFile(filename);
            printAsciiArt(asciiArt);
            break;
        }
        case 2:
            blinkingEyeEffect();
            break;

        default:
            cout << "Invalid choice. Exiting." << endl;
            break;
    }

    return 0;
}
