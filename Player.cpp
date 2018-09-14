#include "Player.h"

#include <vector>
#include <string>
using namespace std;

Player::Player(string name): name(name), hasHighAce(false) {};

Player::~Player() {
  for(Card* c: hand) {
    delete c;
  }
}

string Player::getName() const {
  return name;
}

int Player::calculateTotal() {
  hasHighAce = false;
  int total = 0;
  for(Card* c: hand) {
    if(c->value > 10) {
      total += 10;
    }
    else {
      total += c->value;
    }

    if(c->value == 1) {
      if(!hasHighAce && (total + 10) <= 21) {
        total += 10;
        hasHighAce = true;
      }
    }

    if(total > 21 && hasHighAce) {
      total -= 10;
      hasHighAce = false;
    }
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
