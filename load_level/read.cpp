#include <iostream>
#include <string>
#include <fstream>

int main()
{
	unsigned int y_cord {1};
	std::ifstream level_art_read ("party.txt"); //read art file
	std::string temp_art_store_string {"FAILED"};
	for (unsigned int y_count {0}; y_cord > y_count; ++y_count) //keep grabbing lines till get to right line
   	 {
		 std::getline(level_art_read, temp_art_store_string); //grab line
		 std::cout << temp_art_store_string;
   	 }	
	std::cout << '\n' << temp_art_store_string;;
return 0;
}
