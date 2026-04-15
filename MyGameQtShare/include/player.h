#pragma once

class world;

class player
{
    int speed;
    bool ismoving;
    int x, y;

public:
    player();
    void moveRight();
    void moveUp();
    void moveDown();
    void moveLeft();
    int getX();
    int getY();
    void touchWall(player p, world w);
};
