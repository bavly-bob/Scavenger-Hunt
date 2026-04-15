#include "../include/player.h"

player::player()
{
    x = 5;
    y = 5;
    speed = 1;
    ismoving = false;
}

void player::moveRight()
{
    if (x < 9)
        x += speed;
}

void player::moveUp()
{
    if (y > 0)
        y -= speed;
}

void player::moveDown()
{
    if (y < 9)
        y += speed;
}

void player::moveLeft()
{
    if (x > 0)
        x -= speed;
}

int player::getX()
{
    return x;
}

int player::getY()
{
    return y;
}
