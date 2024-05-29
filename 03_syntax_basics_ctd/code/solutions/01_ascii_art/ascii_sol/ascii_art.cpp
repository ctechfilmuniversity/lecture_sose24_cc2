

void createAsciiObject() {

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
}


// Function to create the blinking effect
void blinkingEyeEffect() {

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