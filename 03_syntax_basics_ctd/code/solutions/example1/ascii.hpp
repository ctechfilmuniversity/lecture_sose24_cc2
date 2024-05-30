//
//  ascii.hpp
//  example1
//
//  Created by abrennec on 30.05.24.
//

#ifndef ascii_hpp
#define ascii_hpp

#include <iostream>
#include <vector>
#include <string>


class asciiArtApp {
    
public: 
    
    void run();
    
    void createAsciiObject(std::vector<std::string>& open, std::vector<std::string>& closed);
    
    
    void blinkingEyeEffect(std::vector<std::string>& faceOpenEye, std::vector<std::string>& faceClosedEye);
    
    void printAsciiArt(const std::vector<std::string>& art);
    
    std::vector<std::string> readAsciiArtFromFile(const std::string& filename);
    void writeAsciiArtToFile(const std::vector<std::string>& art, const std::string& filename);
    
};


#endif /* ascii_hpp */
