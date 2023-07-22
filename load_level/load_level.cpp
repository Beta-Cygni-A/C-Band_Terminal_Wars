#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "load_level.h"
#include "../gridsystem/gridsystem.h"

void loadlevel(unsigned int a, unsigned int b, std::string d)
{
    unsigned int y_cord {b}; //states what y_row the wanted char is in
    unsigned int x_cord {a}; //states what x_row the wanted char is in
    char text {' '};
    std::string temp_art_store_string {""};

    std::ifstream level_art_read (d); //read art file

    for (unsigned int y_count {0}; y_cord > y_count; ++y_count) //keep grabbing lines till get to right line
    {
        std::getline(level_art_read, temp_art_store_string); //grab line
    }

    text = temp_art_store_string[x_cord]; //give text the value of the right char from the line

    grid[y_cord][x_cord] = text; //change the approiate grid sector
}