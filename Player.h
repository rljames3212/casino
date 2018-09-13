#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Card.h"

#include <iostream>
#include <vector>

class Player {
  private:
    std::vector<Card*> hand;
    bool hasHighAce;

  public:
    Player();
    ~Player();
    int calculateTotal();
    void addCard(Card* c);
    void removeCard();
};
#endif
