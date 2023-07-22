#include <iostream>
#include "level_1.h"

int run()
{
    level_1::level_active = true;
    level_1::level_length = 65;
    level_1::level_width = 4;
    current_level = 1;
    
for(unsigned int a {0}; a < y_row; ++a) //loop through all y or rows
	{
		for(unsigned int b {0}; b < x_col; ++b)  // loop thorugh all x or collums
		{
			loadlevel( a, b, level_1::level_art_file);
		}
	}
}
Each level has a art plain text file. Only the current part of the level the size of the grid is printed to the screen via the char grid. As the player 
moves, when player gets to 1/3 of screen from left, background starts to move at player speed. Player can not move farther than 1/3 of the 
screen unless level ends and then player can go to end.