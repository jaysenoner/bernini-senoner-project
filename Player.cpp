
#include "Player.h"

Player::Player() {

    initVariables();
}

Player::~Player() {


}



int Player::rollTheDice() {
    return rand() % 6 + 1;
}

void Player::gainHealth(const int healthGained) {

    lifePoints += healthGained;

}

void Player::takeDamage(const int damageTaken) {

    lifePoints -= damageTaken;

}

void Player::addExp(const int expGained) {

    expPoints += expGained;

}

void Player::update() {

}

void Player::initVariables() {
    initLifePoints();
    initExp();
    initGold();

}

void Player::initLifePoints() {

    lifePoints = ( Player::rollTheDice() + Player::rollTheDice() ) * 4 ;
}

void Player::initExp() {
    expPoints = 0;

}

void Player::initGold() {
    gold = 0;

}


//Getters and Setters


int Player::getLifePoints() const {
    return lifePoints;
}

void Player::setLifePoints(int lifePoints) {
    Player::lifePoints = lifePoints;
}

int Player::getGold() const {
    return gold;
}

void Player::setGold(int gold) {
    Player::gold = gold;
}

int Player::getExpPoints() const {
    return expPoints;
}

void Player::setExpPoints(int expPoints) {
    Player::expPoints = expPoints;
}
