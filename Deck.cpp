#include "Deck.h"

#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

Deck::Deck() {
  for(auto suitIt = suitmap.begin(); suitIt != suitmap.end(); suitIt++) {
    string tempsuit = suitIt->second;
    for(auto valueIt = valuemap.begin(); valueIt != valuemap.end(); valueIt++) {
      int tempval = valueIt->first;
      string tempface = valueIt->second;
      deck.push_back(new Card(tempsuit, tempface, tempval));
    }
  }
}

Deck::~Deck() {
  for(Card* card: deck) {
    delete card;
  }
}

Card* Deck::pop() {
  Card* card = deck.back();
  deck.pop_back();
  return card;
}

void Deck::shuffleDeck() {
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  shuffle(deck.begin(), deck.end(), default_random_engine(seed));
}

int Deck::size() const {
  return deck.size();
}
