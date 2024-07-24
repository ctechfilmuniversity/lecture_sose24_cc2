
#include "ascii.h" 
#include <iostream> 
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

void menu(){

    cout << "Choose an option:" << endl;
    cout << "1. Read and print ASCII art from a file" << endl;
    cout << "2. Get a blinking eye ASCII art" << endl;
    cout << "3. Reward yourself with a coloful one!" << endl;
    cout << "4. How about a random one and some music?" << endl;
    cout << "Enter your choice:" << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed random number generator once at the start


    int choice;
    menu();

    do {
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

        case 3: {
            string filename = "color.txt"; 
            vector<string> colorfulArt = readAsciiArtFromFile(filename);
            int colorCode = 1;
            int const numColors = 4; 

            while (true) {
                printColorAsciiArt(colorfulArt, colorCode);
                this_thread::sleep_for(chrono::milliseconds(500));

                colorCode = colorCode + 1 ;
                if (colorCode > numColors) {
                    colorCode = 1; 
                }

                system("cls");
            }
            break;
        }

            case 4: {
            vector<string> randomArt = getRandomAsciiArt();
            string randomMusicFile = getRandomMusic();
            
            // Display the random ASCII art
            printAsciiArt(randomArt);
            
            // Play the random music file
            playMusic(randomMusicFile);
            
            break;
        }
            case 5:
                cout << "Exiting..." << endl;
                break;
        default:
            cout << "Invalid choice. Exiting." << endl;
            break;
    }
    } while (choice != 5);

    return 0;
}
