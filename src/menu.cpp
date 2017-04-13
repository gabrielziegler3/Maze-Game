#include <iostream>
#include <cstdlib>
#include "../inc/menu.hpp"

void Menu::mainMenu(){
    int choice;

    system("clear");
    std::cout << '\n';
    std::cout << "****************************************##****************************************\n";
    std::cout << "\t\t\tWELCOME TO THE IMPOSSIBLE MAZE\n" << '\n';
    std::cout << "\t\tYOU'LL HAVE 3 LIVES TO FINISH THE 3 STAGES\n" << '\n';
    std::cout << "\t\tIF YOU THINK YOU'RE A SKILLFULL PLAYER PRESS 1\n" << '\n';
    std::cout << "\tAND STRIVE TO REACH THE *LIST OF THE LEGENDS* IN THE END OF THE GAME\n" << '\n';
    std::cout << "\n" << '\n';
    std::cout << "****************************************##****************************************\n";
    std::cout << " 1 - Start the game.\n";
    std::cout << " 2 - Exit.\n\n";
    std::cout << " Enter your choice and press enter: ";
    std::cin >> choice;
    while (choice!= 1 && choice != 2) {
        std::cout << "Please enter 1 to proceed or enter 2 to quit" << '\n';
        std::cin >> choice;
    }
    switch (choice){
        case 1:
        break;

        case 2:
            std::cout << "Exiting game." << '\n';
            exit(1);
        break;
    }
}
