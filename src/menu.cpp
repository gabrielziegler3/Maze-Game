#include "../inc/menu.hpp"
#include <iostream>
#include <cstdlib>
#include <ncurses.h>


void Menu::printDragon(){
    mvprintw(1, 1, "111111111111111111111111111111111111111111111111111111111\n");
    mvprintw(2, 1, "111111111111111111111111111111111¶¶¶111111111111111111111\n");
    mvprintw(3, 1, "111111111111111111111111111111¶¶¶¶11111111111111111111111\n");
    mvprintw(4, 1, "1111111111111111111111111111¶¶¶¶1111111111111111111111111\n");
    mvprintw(5, 1, "11111111111111111111111111¶¶¶¶¶¶1111111111111111111111111\n");
    mvprintw(6, 1, "111111111111111111111111¶¶¶¶¶¶1111¶¶¶11¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111\n");
    mvprintw(7, 1, "111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111\n");
    mvprintw(8, 1, "11111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111111\n");
    mvprintw(9, 1, "11111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111\n");
    mvprintw(10, 1, "1111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111111\n");
    mvprintw(11, 1, "111111111111111¶¶¶111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111\n");
    mvprintw(12, 1, "111111111111¶¶¶¶¶11¶¶¶¶¶¶¶¶¶¶¶11¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111\n");
    mvprintw(13, 1, "11111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1¶¶1111¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶¶¶¶1111\n");
    mvprintw(14, 1, "1111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111¶11111¶¶¶¶¶¶¶¶¶¶¶¶¶111¶¶¶¶111\n");
    mvprintw(15, 1, "11111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111¶¶¶11\n");
    mvprintw(16, 1, "1111¶¶¶¶¶¶¶¶111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111¶¶1\n");
    mvprintw(17, 1, "11111¶¶¶¶¶111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111\n");
    mvprintw(18, 1, "1111111¶1111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111\n");
    mvprintw(19, 1, "1111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111\n");
    mvprintw(20, 1, "111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶¶¶¶1111111\n");
    mvprintw(21, 1, "11111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111¶¶¶¶¶1111111\n");
    mvprintw(22, 1, "11111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111¶¶¶¶1111111\n");
    mvprintw(23, 1, "111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111¶¶¶¶1111111\n");
    mvprintw(24, 1, "1111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111¶¶¶¶1111111\n");
    mvprintw(25, 1, "111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111¶¶¶¶¶¶111111111111111¶¶¶11111111\n");
    mvprintw(26, 1, "11¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111111111111111111111111¶¶111111111\n");
    mvprintw(27, 1, "1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111111111¶¶1111111111111111111111\n");
    mvprintw(28, 1, "¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111111111111111¶¶¶¶11111111111111111\n");
    mvprintw(29, 1, "¶¶¶¶¶¶¶¶¶¶1¶¶¶111111111111111111111111¶¶¶¶¶11111111111111\n");
    mvprintw(30, 1, "¶¶¶¶¶¶¶¶¶¶11¶¶11111111111111111111111111¶¶¶¶¶¶¶1111111111\n");
    mvprintw(31, 1, "¶¶¶¶¶¶¶¶¶¶¶111¶111111111111¶¶¶11111¶¶¶¶111¶¶¶¶¶¶¶11111111\n");
    mvprintw(32, 1, "¶¶¶¶¶¶¶¶¶¶¶¶11111111111111111¶¶¶11111¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111\n");
    mvprintw(33, 1, "¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111\n");
    mvprintw(34, 1, "¶1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11\n");
    mvprintw(35, 1, "¶¶11¶¶¶¶¶¶¶¶¶¶¶¶111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111¶¶¶¶¶¶¶¶¶¶¶¶1\n");
    mvprintw(36, 1, "1¶11¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111¶¶¶¶¶¶¶¶\n");
    mvprintw(37, 1, "1111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111111¶¶¶¶¶¶\n");
    mvprintw(38, 1, "1111¶¶¶¶¶1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶¶¶¶¶¶¶11111111111111¶¶¶¶¶\n");
    mvprintw(39, 1, "11111¶¶¶11111¶¶¶¶¶¶¶¶¶¶¶¶¶11111¶¶¶¶¶¶¶¶¶¶11111111111111¶¶\n");
    mvprintw(40, 1, "1111¶¶¶11111111¶¶¶1¶¶¶¶¶¶¶¶¶11111¶¶¶¶¶11111111111111111¶¶\n");
    mvprintw(41, 1, "1111¶¶¶111111111111111¶¶¶¶¶¶¶1111111¶¶¶¶¶¶¶¶111111111111¶\n");
    mvprintw(42, 1, "11111¶¶1111111111111111111¶¶¶¶¶1111111111111111111111111¶\n");
    mvprintw(43, 1, "111111¶11111111111111111111¶¶¶¶11111111111111111111111111\n");
    mvprintw(44, 1, "1111111111111111111111111111¶¶¶11111111111111111111111111\n");
    mvprintw(45, 1, "11111111111111111111111111111¶¶11111111111111111111111111\n");
}

void Menu::printText(){
    mvprintw(20, 100, "\tWELCOME TO THE IMPOSSIBLE MAZE\n");
    mvprintw(21, 100, "YOU HAVE 3 LIVES TO FINISH THE 3 STAGES\n");
    mvprintw(22, 100, "IF YOU THINK YOU'RE A SKILLFULL PLAYER\n");
 	mvprintw(23, 100, "STRIVE TO REACH THE *LIST OF THE LEGENDS*\n");
    mvprintw(24, 100, "\t\tIN THE END OF THE GAME\n");
    attron(A_STANDOUT);
    mvprintw(30, 100, "Play");
    attroff(A_STANDOUT);
    mvprintw(31, 100, "Show All Scores of Classic Mode.");
    mvprintw(32, 100, "Exit Game.");
}

void Menu::printWinner(Player * player){
    std::string aux;
    clear();
    printDragon();
    mvprintw(20, 100, "CONGRATULATIONS, YOU HAVE FINISHED ALL THE MAZE COURSE\n");
    mvprintw(21, 100, "SCORE: [%d]\n", player->getScore());
    std::cout << "Write your name" << '\n';
    std::cin >> aux;
    player->setName(aux);
    player->setAlive(false);
    mvprintw(24, 100, "\t\t PRESS ENTER \n");
    getch();
}

int Menu::mainMenu() {
	int c=0, ch;
	initscr();
	// erase();
	// raw();
	keypad(stdscr, TRUE);
	noecho();
    curs_set(0);
    printDragon();
    printText();
	while(1) {
		ch=getch();
        if(ch=='\n') {
			return c;
		}
		else if(ch==KEY_UP) {
			if(c==1 || c==2) {
				c--;
			}
			else {
				c=2;
			}
		}
		else if(ch==KEY_DOWN) {
			if(c==0 || c==1) {
				c++;
			}
			else {
				c=0;
			}
		}
        else {
            c =0;
        }

		switch(c) {
			case 0:
				erase();
                printDragon();
                printText();
				attron(A_STANDOUT);
				mvprintw(30, 100, "Play");
				attroff(A_STANDOUT);
				mvprintw(31, 100, "Show All Scores of Classic Mode.");
				mvprintw(32, 100, "Exit Game.");
				break;
			case 1:
				erase();
                printDragon();
                printText();
				mvprintw(30, 100, "Play");
                attron(A_STANDOUT);
				mvprintw(31, 100, "Show All Scores of Classic Mode.");
                attroff(A_STANDOUT);
				mvprintw(32, 100, "Exit Game.");

				break;
			case 2:
				erase();
                printDragon();
                printText();
				mvprintw(30, 100, "Play");
				mvprintw(31, 100, "Show All Scores of Classic Mode.");
				attron(A_STANDOUT);
				mvprintw(32, 100, "Exit Game.");
				attroff(A_STANDOUT);

				break;
		}
	}
    endwin();
}

void Menu::gameOver(Player * player){
    erase();
    mvprintw(3, 17, "  /$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$\n");
    mvprintw(4, 17, " /$$__  $$ /$$__  $$| $$$    /$$$| $$_____/\n");
    mvprintw(5, 17, "| $$  \\__/| $$  \\ $$| $$$$  /$$$$| $$      \n");
    mvprintw(6, 17, "| $$ /$$$$| $$$$$$$$| $$ $$/$$ $$| $$$$$   \n");
    mvprintw(7, 17, "| $$|_  $$| $$__  $$| $$  $$$| $$| $$__/   \n");
    mvprintw(8, 17, "| $$  \\ $$| $$  | $$| $$\\  $ | $$| $$      \n");
    mvprintw(9, 17, "|  $$$$$$/| $$  | $$| $$ \\/  | $$| $$$$$$$$\n");
    mvprintw(10, 17, " \\______/ |__/  |__/|__/     |__/|________/\n");
    mvprintw(11, 17, "    /$$$$$$  /$$    /$$ /$$$$$$$$ /$$$$$$$ \n");
    mvprintw(12, 17, "   /$$__  $$| $$   | $$| $$_____/| $$__  $$\n");
    mvprintw(13, 17, "  | $$  \\ $$| $$   | $$| $$      | $$  \\ $$\n");
    mvprintw(14, 17, "  | $$  | $$|  $$ / $$/| $$$$$   | $$$$$$$/\n");
    mvprintw(15, 17, "  | $$  | $$ \\  $$ $$/ | $$__/   | $$__  $$\n");
    mvprintw(16, 17, "  | $$  | $$  \\  $$$/  | $$      | $$  \\ $$\n");
    mvprintw(17, 17, "  |  $$$$$$/   \\  $/   | $$$$$$$$| $$  | $$\n");
    mvprintw(18, 17, "   \\______/     \\_/    |________/|__/  |__/\n");
    attron(A_STANDOUT);
    mvprintw(20, 35, "Score: %d", player->getScore());
    attroff(A_STANDOUT);
    mvprintw(23, 35, "Press any key");
    getch();
    system("clear");
    player->setAlive(false);
}
