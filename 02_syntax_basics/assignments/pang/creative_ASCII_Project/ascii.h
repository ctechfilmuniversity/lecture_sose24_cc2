#ifndef ASCII_H
#define ASCII_H

#include <vector>
#include <string>
#include <stdlib.h>

//declare Functions

void printAsciiArt(const std::vector<std::string>& art);
void printColorAsciiArt(const std::vector<std::string>& art, int colorCode = 0);
std::vector<std::string> readAsciiArtFromFile(const std::string& filename);
void blinkingEyeEffect();

#endif // ASCII_H