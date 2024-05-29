
#pragma once 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// This is now an Ascii Art Type
struct myAsciiArt {
    
    std::vector<std::string> faceOpenEye;
    std::vector<std::string> faceClosedEye;
};


void createAsciiObject();
void blinkingEyeEffect();

void printAsciiArt(const std::vector<std::string>& art);

std::vector<std::string> readAsciiArtFromFile(const std::string& filename);
void writeAsciiArtToFile(const vector<string>& art, const string& filename);
