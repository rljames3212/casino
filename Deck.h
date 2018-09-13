#ifndef __DECK_H__
#define __DECK_H__

#include "Card.h"

#include <vector>
#include <map>
#include <string>
using namespace std;

class Deck {
  private:

    const map<int, string> suitmap = {{0, "Clubs"},
                                {1, "Diamonds"},
                                {2, "Hearts"},
                                {3, "Spades"}};

    const map<int, string> valuemap = {{1, "Ace"},
                                 {2, "Two"},
                                 {3, "Three"},
                                 {4, "Four"},
                                 {5, "Five"},
                                 {6, "Six"},
                                 {7, "Seven"},
                                 {8, "Eight"},
                                 {9, "Nine"},
                                 {10, "Ten"},
                                 {11, "Jack"},
                                 {12, "Queen"},
                                 {13, "King"}};

  public:
    Deck();
    ~Deck();
    vector<Card*> deck;
    Card* pop();
    void shuffleDeck();
    int size() const;
};

#endif
