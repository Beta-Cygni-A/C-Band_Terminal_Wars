#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
#include <limits>
#include <utility>
#include <string_view>
#include "gridsystem/gridsystem.h"
//#include "level_1/level_1.h"
#include "load_level/load_level.h"

//new name from Localverse: Contrascii: Terminal Warfare

int main()
{
    //print_grid(grid, y_row, x_col);
/*
    //int current_level {1};
    level_1::level_active = true;
    level_1::level_length = 64;

for(unsigned int a {0}; a < y_row; ++a) //loop through all y or rows
	{
		for(unsigned int b {0}; b < x_col; ++b)  // loop thorugh all x or collums
		{
			loadlevel( static_cast<int>(a), static_cast<int>(b), level_1::level_length, level_1::level_art_file);
		}
	}
*/
    grid[1][1] = '/';
    grid[2][1] = '\\';

    grid[1][2] = '-';
    grid[2][2] = '_';
    grid[4][2] = '0';

    grid[1][3] = '\\';
    grid[2][3] = '/';
    grid[3][3] = '0';

    grid[1][4] = '/';
    grid[2][4] = '\\';
    grid[3][4] = '0';

    grid[1][5] = '-';
    grid[2][5] = '_';
    grid[4][5] = '0';

    grid[1][6] = '\\';
    grid[2][6] = '/';
    print_grid(grid, y_row, x_col);
    std::string artfile {"arty.txt"};
    loadlevel(3, 3, /*5,*/ artfile);
    print_grid(grid, y_row, x_col);
    return 0;
}