#include "functions.hpp"

int main() {
  int turn = 1;
  bool win = false;

  int player_x_coordinate;
  int player_y_coordinate;

  int bot_x_coordinate;
  int bot_y_coordinate;

  bool player_status;

  std::vector<std::string> grid_row1;
  std::vector<std::string> grid_row2;
  std::vector<std::string> grid_row3;

  grid_row1 = {'[ ]', '[ ]', '[ ]'};
  grid_row2 = {'[ ]', '[ ]', '[ ]'};
  grid_row3 = {'[ ]', '[ ]', '[ ]'};

  while (win == false) {
    display_grid(grid_row1, grid_row2, grid_row3, turn);

    player_status = true;
    player_turn(grid_row1, grid_row2, grid_row3);
    update_grid(grid_row1, grid_row2, grid_row3, player_x_coordinate, player_y_coordinate);

    player_status = false;
    bot_turn();
    update_grid(grid_row1, grid_row2, grid_row3, bot_x_coordinate, bot_y_coordinate);

    check_win_condition();
    turn++;
  }

  end_game();
}