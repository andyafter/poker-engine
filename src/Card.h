#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    int rank;
    std::string suit;

    Card(int rank, std::string suit);
    std::string rank_to_str();
    std::string suit_to_icon();
    void print();
};

#endif // CARD_H
