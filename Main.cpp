#include <iostream>

#include "games/GeometryProgression.h"
#include "games/LcmGame.h"

void displayMenu() {
    std::cout << "Select a game to play:\n";
    std::cout << "1. Geometry Progression Game\n";
    std::cout << "2. LCM Game\n";
    std::cout << "0. Exit\n";
}

int main() {
    int choice;
    displayMenu();

    std::cin >> choice;

    switch (choice) {
        case 1:
            StartGeometryGame();
            break;
        case 2:
            StartLcmGame();
            break;
        case 0:
            std::cout << "Exiting program.\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please select again.\n";
            break;
    }
    return 0;
}