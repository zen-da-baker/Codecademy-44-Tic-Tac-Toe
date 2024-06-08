#include <iostream>
#include <vector>
#include <cmath>
#include "functions.hpp"

int main() {
  int turn = 1;

  bool player_win = false;
  bool bot_win = false;

  int player_x_coordinate = 0;
  int player_y_coordinate = 0;

  int bot_x_coordinate;
  int bot_y_coordinate;

  bool player_status = true;

  std::vector<std::string> grid_row1;
  std::vector<std::string> grid_row2;
  std::vector<std::string> grid_row3;

  grid_row1.push_back("[ ]");
  grid_row1.push_back("[ ]");
  grid_row1.push_back("[ ]");

  grid_row2.push_back("[ ]");
  grid_row2.push_back("[ ]");
  grid_row2.push_back("[ ]");

  grid_row3.push_back("[ ]");
  grid_row3.push_back("[ ]");
  grid_row3.push_back("[ ]");
  

  while (player_win == false || bot_win == false) {
    display_grid(grid_row1, grid_row2, grid_row3, turn);

    player_status = true;
    player_turn(player_x_coordinate, player_y_coordinate);
    update_grid(grid_row1, grid_row2, grid_row3, player_x_coordinate, player_y_coordinate, player_status);

    player_status = false;
    bot_turn(bot_x_coordinate, bot_y_coordinate);
    update_grid(grid_row1, grid_row2, grid_row3, bot_x_coordinate, bot_y_coordinate, player_status);

    check_win_condition(grid_row1, grid_row2, grid_row3, player_win, bot_win);
    turn++;
  }

  end_game(player_win, bot_win);
}