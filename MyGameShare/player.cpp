#include "player.h"
#include <iostream>

Player::Player() {
    x = 5;
    y = 5;
    speed = 1;
}

void Player::moveRight() {
    if (x < 9) x += speed;
}

void Player::moveUp() {
    if (y > 0) y -= speed;
}

void Player::moveDown() {
    if (y < 9) y += speed;
}

void Player::moveLeft() {
    if (x > 0) x -= speed;
}

int Player::getX() {
    return x;
}

int Player::getY() {
    return y;
}
