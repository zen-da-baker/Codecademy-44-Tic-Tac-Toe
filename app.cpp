#include <iostream>
#include <vector>

int main() {
  int turn = 1;
  bool win = false;

  std::vector<std::string> grid_column1;
  std::vector<std::string> grid_column2;
  std::vector<std::string> grid_column3;

  grid_column1 = {'[ ]', '[ ]', '[ ]'};
  grid_column2 = {'[ ]', '[ ]', '[ ]'};
  grid_column3 = {'[ ]', '[ ]', '[ ]'};

  while (win == false) {
    display_grid();
    player_turn(int x, int y);
    bot_turn();
    check_win_condition();
    turn++;
  }

  end_game();
}