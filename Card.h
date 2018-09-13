#ifndef __CARD_H__
#define __CARD_H__

#include <string>

struct Card {
  Card(std::string suit, std::string face, int value): suit(suit), face(face), value(value) {}
  int value;
  std::string suit;
  std::string face;
};
#endif
