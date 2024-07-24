#ifndef ASCII_H
#define ASCII_H

#include <vector>
#include <string>


//declare Functions

void printAsciiArt(const std::vector<std::string>& art);
void printColorAsciiArt(const std::vector<std::string>& art, int colorCode = 0);
std::vector<std::string> readAsciiArtFromFile(const std::string& filename);
void blinkingEyeEffect();
void playMusic(const std::string& musicFiles);
std::vector<std::string> getRandomAsciiArt();
std::string getRandomMusic();

#endif // ASCII_H