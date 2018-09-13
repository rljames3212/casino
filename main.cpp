#include "Deck.h"
#include "Player.h"

#include <iostream>

int main() {
  Deck* master = new Deck();

  Player p1;

  master->shuffleDeck();
  Card* c1 = new Card("Hearts", "Ace", 1);
  Card* c2 = new Card("Hearts", "Ace", 1);
  Card* c3 = new Card("Hearts", "Ten", 10);
  Card* c4 = new Card("Hearts", "King", 13);

  p1.addCard(c1);
  std::cout << p1.calculateTotal() << endl;
  p1.addCard(c2);
  std::cout << p1.calculateTotal() << endl;
  p1.addCard(c3);
  std::cout << p1.calculateTotal() << endl;
  p1.addCard(c4);
  std::cout << p1.calculateTotal() << endl;
  return 0;
}
