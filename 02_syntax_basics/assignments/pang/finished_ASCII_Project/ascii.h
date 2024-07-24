#ifndef ASCII_H
#define ASCII_H

#include <vector>
#include <string>

//declare Functions

void printAsciiArt(const std::vector<std::string>& art);
std::vector<std::string> readAsciiArtFromFile(const std::string& filename);
void blinkingEyeEffect();

#endif // ASCII_H