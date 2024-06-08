#include <iostream>
#include <vector>
#include <cmath>

    int turn = 1;

    bool player_win = false;
    bool bot_win = false;

    int player_x_coordinate = 0;
    int player_y_coordinate = 0;

    int bot_x_coordinate = 0;
    int bot_y_coordinate = 0;

    bool player_status = true;

    std::vector<std::string> grid_row1;
    std::vector<std::string> grid_row2;
    std::vector<std::string> grid_row3;

    

void display_grid(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int turn) {
    std::cout << "Turn: " << turn << "\n";

    for (int c = 0; c < grid_row3.size(); c++) {
        std::cout << grid_row3[c] << " ";
    }

    std::cout << "\n";

    for (int b = 0; b < grid_row2.size(); b++) {
        std::cout << grid_row2[b] << " ";
    }

    std::cout << "\n";

    for (int a = 0; a < grid_row1.size(); a++) {
        std::cout << grid_row1[a] << " ";
    }

    std::cout << "\n ========================================= \n";
}

int player_turn_x_coordinate() {
    std::cout << "Choose an X coordinate: \n";
    std::cin >> player_x_coordinate;

    return player_x_coordinate;
}

int player_turn_y_coordinate() {
    std::cout << "Choose a Y coordinate: \n";
    std::cin >> player_y_coordinate;

    return player_y_coordinate;
}

void update_grid(int x_coordinate, int y_coordinate, bool player_status) {
    if (x_coordinate == 1 && y_coordinate == 1 && player_status == true) {
        grid_row1[0] = "[x]";
    } else if (x_coordinate == 1 && y_coordinate == 1 && player_status == false) {
        grid_row1[0] = "[o]";
    } else if (x_coordinate == 2 && y_coordinate == 1 && player_status == true) {
        grid_row1[1] = "[x]";
    } else if (x_coordinate == 2 && y_coordinate == 1 && player_status == false) {
        grid_row1[1] = "[o]";
    } else if (x_coordinate == 3 && y_coordinate == 1 && player_status == true) {
        grid_row1[2] = "[x]";
    } else if (x_coordinate == 3 && y_coordinate == 1 && player_status == false) {
        grid_row1[2] = "[o]";
    } else if (x_coordinate == 1 && y_coordinate == 2 && player_status == true) {
        grid_row2[0] = "[x]";
    } else if (x_coordinate == 1 && y_coordinate == 2 && player_status == false) {
        grid_row2[0] = "[o]";
    } else if (x_coordinate == 2 && y_coordinate == 2 && player_status == true) {
        grid_row2[1] = "[x]";
    } else if (x_coordinate == 2 && y_coordinate == 2 && player_status == false) {
        grid_row2[1] = "[o]";
    } else if (x_coordinate == 3 && y_coordinate == 2 && player_status == true) {
        grid_row2[2] = "[x]";
    } else if (x_coordinate == 3 && y_coordinate == 2 && player_status == false) {
        grid_row2[2] = "[o]";
    } else if (x_coordinate == 1 && y_coordinate == 3 && player_status == true) {
        grid_row3[0] = "[x]";
    } else if (x_coordinate == 1 && y_coordinate == 3 && player_status == false) {
        grid_row3[0] = "[o]";
    } else if (x_coordinate == 2 && y_coordinate == 3 && player_status == true) {
        grid_row3[1] = "[x]";
    } else if (x_coordinate == 2 && y_coordinate == 3 && player_status == false) {
        grid_row3[1] = "[o]";
    } else if (x_coordinate == 3 && y_coordinate == 3 && player_status == true) {
        grid_row3[2] = "[x]";
    } else if (x_coordinate == 3 && y_coordinate == 3 && player_status == false) {
        grid_row3[2] = "[o]";
    } else {
        std::cout << "Invalid input \n";
    }
}

int bot_turn_x_coordinate() {
    return rand() % 3;
}

int bot_turn_y_coordinate() {
    return rand() % 3;
}

void check_win_condition(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3) {
    if (grid_row1[0] == "[x]" && grid_row2[0] == "[x]" && grid_row3[0] == "[x]") {
        player_win = true;
    } else if (grid_row1[0] == "[o]" && grid_row2[0] == "[o]" && grid_row3[0] == "[o]") {
        bot_win = true;
    } else if (grid_row1[1] == "[x]" && grid_row2[1] == "[x]" && grid_row3[1] == "[x]") {
        player_win = true;
    } else if (grid_row1[1] == "[o]" && grid_row2[1] == "[o]" && grid_row3[1] == "[o]") {
        bot_win = true;
    } else if (grid_row1[2] == "[x]" && grid_row2[2] == "[x]" && grid_row3[2] == "[x]") {
        player_win = true;
    } else if (grid_row1[2] == "[o]" && grid_row2[2] == "[o]" && grid_row3[2] == "[o]") {
        bot_win = true;
    } else if (grid_row1[0] == "[x]" && grid_row1[1] == "[x]" && grid_row1[3] == "[x]") {
        player_win = true;
    } else if (grid_row1[0] == "[o]" && grid_row1[1] == "[o]" && grid_row1[3] == "[o]") {
        bot_win = true;
    } else if (grid_row2[0] == "[x]" && grid_row2[1] == "[x]" && grid_row2[2] == "[x]") {
        player_win = true;
    } else if (grid_row2[0] == "[o]" && grid_row2[1] == "[o]" && grid_row2[2] == "[o]") {
        bot_win = true;
    } else if (grid_row3[0] == "[x]" && grid_row3[1] == "[x]" && grid_row3[2] == "[x]") {
        player_win = true;
    } else if (grid_row3[0] == "[o]" && grid_row3[1] == "[o]" && grid_row3[2] == "[o]") {
        bot_win = true;
    } else if (grid_row1[0] == "[x]" && grid_row2[1] == "[x]" && grid_row3[2] == "[x]") {
        player_win = true;
    } else if (grid_row1[0] == "[o]" && grid_row2[1] == "[o]" && grid_row3[2] == "[o]") {
        bot_win = true;
    } else if (grid_row1[2] == "[x]" && grid_row2[1] == "[x]" && grid_row3[0] == "[x]") {
        player_win = true;
    } else if (grid_row1[2] == "[o]" && grid_row2[1] == "[o]" && grid_row3[0] == "[o]") {
        bot_win = true;
    } else {
        bot_win = true;
    }
}

void end_game(bool player_win, bool bot_win) {
    if (player_win == true) {
        std::cout << "Player wins \n";
    } else if (bot_win == true) {
        std::cout << "Bot wins \n";
    } else {
        std::cout << "We have a tie \n";
    }
}

int main() {

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
        player_x_coordinate = player_turn_x_coordinate();
        player_y_coordinate = player_turn_y_coordinate();

        update_grid(player_x_coordinate, player_y_coordinate, true);
        
        bot_x_coordinate = bot_turn_x_coordinate();
        bot_y_coordinate = bot_turn_y_coordinate();
        update_grid(bot_x_coordinate, bot_y_coordinate, false);

        display_grid(grid_row1, grid_row2, grid_row3, turn);

        check_win_condition(grid_row1, grid_row2, grid_row3);
        turn++;
    }

  end_game(player_win, bot_win);
}