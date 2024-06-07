#include <iostream>
#include <vector>

void display_grid(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int turn);

void player_turn(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3);

void update_grid(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int x_coordinate, int y_coordinate);