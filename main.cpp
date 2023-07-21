#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>
#include "gridsystem/gridsystem.h"
#include "level_1/level_1.h"
#include "load_level/load_level.h"

//new name from Localverse: Contrascii: Terminal Warfare

int main()
{
    Vec2DChar grid (y_row, std::vector<char> (x_col, 'x'));
    print_grid(grid, y_row, x_col);

    int current_level {1};
    level_1::level_active = true;
    level_1::level_length = 64;
    
    loadlevel( x,  y, level::level_length, level_1::level_art_file);

    return 0;
}