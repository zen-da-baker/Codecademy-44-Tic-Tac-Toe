

void display_grid(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int turn);

void player_turn(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int x_coordinate, int y_coordinate);

void update_grid(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int x_coordinate, int y_coordinate);

void bot_turn(int bot_x_coordinate, int bot_y_coordinate);

void check_win_condition(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, bool player_win, bool bot_win);

void end_game(bool player_win, bool bot_win);