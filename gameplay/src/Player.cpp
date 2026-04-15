#include "Player.h"

Player::Player()
{
    x = 5;
    y = 5;
    speed = 1;
    ismoving = false;
}

void Player::moveRight()
{
    if (x < 9)
        x += speed;
}

void Player::moveUp()
{
    if (y > 0)
        y -= speed;
}

void Player::moveDown()
{
    if (y < 9)
        y += speed;
}

void Player::moveLeft()
{
    if (x > 0)
        x -= speed;
}

int Player::getX() const
{
    return x;
}

int Player::getY() const
{
    return y;
}
