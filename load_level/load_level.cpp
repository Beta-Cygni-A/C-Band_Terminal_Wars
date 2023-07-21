#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
#include "load_level.h"
#include "../gridsystem/gridsystem.h"
/*
void loadlevel(int a, int b, int c, std::string_view d)
{
    int y_cord {b}; //states what y_row the wanted char is in
    int x_cord {a}; //states what x_row the wanted char is in
    int temp_level_length {c}; //states how long the level is
    char text {' '};

    std::ifstream level_art_read{d}; //read art file

    for (int y_count {0}; y_cord < y_count; ++y_count) //keep grabbing lines till get to right line
    {
        std::vector<char> temp_art_store (temp_level_length, ' '); //a bunch of chars to hold the grabbed line char by char
        std::getline(level_art_read, temp_art_store); //grab line

        text = temp_art_store[x_cord]; //give text the value of the right char from the line
    }

    grid[y_cord][x_cord] = text;
}
*/
void loadlevel(unsigned int a, unsigned int b, /*unsigned int c,*/ std::string d)
{
    unsigned int y_cord {b}; //states what y_row the wanted char is in
    unsigned int x_cord {a}; //states what x_row the wanted char is in
    //unsigned int temp_level_length {c}; //states how long the level is
    char text {' '};
    std::string temp_art_store_string {""};

    std::ifstream level_art_read (d); //read art file

    for (unsigned int y_count {0}; y_cord > y_count; ++y_count) //keep grabbing lines till get to right line
    {
        std::getline(level_art_read, temp_art_store_string); //grab line
    }

    //std::array temp_art_store_array {temp_art_store_string}; //a bunch of chars to hold the grabbed line char by char

    //std::strcpy(temp_art_store_array ,std::data(temp_art_store_string));
    
    //std::strcpy(temp_art_store_array[x_cord],std::data(text));

    text = temp_art_store_string[x_cord]; //give text the value of the right char from the line

    grid[y_cord][x_cord] = text;
}