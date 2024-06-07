#include <iostream>
#include <vector>

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

void player_turn(std::vector<std::string> grid_column1, std::vector<std::string> grid_column2, std::vector<std::string> grid_column3) {
    std::cout << "Choose an X coordinate: \n";
    std::cin >> player_x_coordinate;

    std::cout << "Choose a Y coordinate: \n";
    std::cin >> player_y_coordinate;
}

void update_grid(std::vector<std::string> grid_row1, std::vector<std::string> grid_row2, std::vector<std::string> grid_row3, int x_coordinate, int y_coordinate, bool player_status) {
    if (x_coordinate == 1 && y_coordinate == 1 && player_status == true) {
        grid_row1[0] = '[x]';
    } else if (x_coordinate == 1 && y_coordinate == 1 && player_status == false) {
        grid_row1[0] = '[o]';
    } else if (x_coordinate == 2 && y_coordinate == 1 && player_status == true) {
        grid_row1[1] = '[x]';
    } else if (x_coordinate == 2 && y_coordinate == 1 && player_status == false) {
        grid_row1[1] = '[o]';
    } else if (x_coordinate == 3 && y_coordinate == 1 && player_status == true) {
        grid_row1[2] = '[x]';
    } else if (x_coordinate == 3 && y_coordinate == 1 && player_status == false) {
        grid_row1[2] = '[o]';
    } else if (x_coordinate == 1 && y_coordinate == 2 && player_status == true) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 1 && y_coordinate == 2 && player_status == false) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 2 && y_coordinate == 2 && player_status == true) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 2 && y_coordinate == 2 && player_status == false) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 3 && y_coordinate == 2 && player_status == true) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 3 && y_coordinate == 2 && player_status == false) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 1 && y_coordinate == 3 && player_status == true) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 1 && y_coordinate == 3 && player_status == false) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 2 && y_coordinate == 3 && player_status == true) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 2 && y_coordinate == 3 && player_status == false) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 3 && y_coordinate == 3 && player_status == true) {
        grid_column1[0] = '[o]';
    } else if (x_coordinate == 3 && y_coordinate == 3 && player_status == false) {
        grid_column1[0] = '[o]';
    } else {
        std::cout << "Invalid input \n";
    }