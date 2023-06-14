#include "Card.h"
#include <iostream>
#include <map>

Card::Card(int rank, std::string suit) : rank(rank), suit(suit) {}

std::string Card::rank_to_str() {
    std::map<int, std::string> rank_map = {
        {2, "2"}, {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"}, {7, "7"}, {8, "8"}, {9, "9"},
        {10, "10"}, {11, "jack"}, {12, "queen"}, {13, "king"}, {14, "ace"}
    };
    return rank_map[rank];
}

std::string Card::suit_to_icon() {
    std::map<std::string, std::string> suit_map = {
        {"hearts", "♥"}, {"diamonds", "♦"}, {"clubs", "♣"}, {"spades", "♠"}
    };
    return suit_map[suit];
}

void Card::print() {
    std::cout << "<Card card=[" << rank_to_str() << " of " << suit << " " << suit_to_icon() << "]>" << std::endl;
}
