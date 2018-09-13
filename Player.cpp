#include "Player.h"

#include <vector>
#include <iostream>
using namespace std;

Player::Player() {
  hasHighAce = false;
}

Player::~Player() {
  for(Card* c: hand) {
    delete c;
  }
}

int Player::calculateTotal() {
  int total = 0;
  for(Card* c: hand) {
    total += c->value;
  }
  return total;
}

void Player::addCard(Card* c) {
  hand.push_back(c);
}

void Player::removeCard() {
  if(hand.size() != 0) {
    hand.pop_back();
  }
}
