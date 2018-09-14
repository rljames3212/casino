#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Card.h"

#include <iostream>
#include <vector>
#include <string>

class Player {
  private:
    std::vector<Card*> hand;
    bool hasHighAce;
    std::string name;

  public:
    Player(std::string);
    ~Player();
    std::string getName() const;
    int calculateTotal();
    void addCard(Card* c);
    void removeCard();
};
#endif
