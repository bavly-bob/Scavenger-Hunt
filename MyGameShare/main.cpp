#include <iostream>
#include "player.h"

const int SIZE = 10;

void draw(Player p) {
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            if (p.getX() == x && p.getY() == y)
                std::cout << "P ";
            else
                std::cout << ". ";
        }
        std::cout << std::endl;
    }
}

char getKey() {
    char ch = std::cin.get();
    if (ch == '\e') {
        std::cin.get(); // skip [
        ch = std::cin.get();
        if (ch == 'A') return 'w'; // up arrow
        if (ch == 'B') return 's'; // down arrow
        if (ch == 'C') return 'd'; // right arrow
        if (ch == 'D') return 'a'; // left arrow
    }
    return ch;
}

int main() {
    Player p;
    char input;

    while (true) {
        system("clear"); // clears screen (Mac)

        draw(p);

        std::cout << "Move (w/a/s/d or arrows, q to quit): ";
        input = getKey();

        if (input == 'w') p.moveUp();
        if (input == 's') p.moveDown();
        if (input == 'a') p.moveLeft();
        if (input == 'd') p.moveRight();
        if (input == 'q') break;
    }

    return 0;
}
