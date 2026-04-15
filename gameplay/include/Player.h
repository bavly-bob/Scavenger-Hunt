#pragma once

class Player
{
    int speed;
    bool ismoving;
    int x, y;

public:
    Player();
    void moveRight();
    void moveUp();
    void moveDown();
    void moveLeft();
    int getX() const;
    int getY() const;
};
