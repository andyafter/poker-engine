#ifndef CARD_COMBOS_H
#define CARD_COMBOS_H

#include <vector>
#include "Card.h"

std::vector<std::vector<Card>> get_combinations(std::vector<Card> cards, int num_cards);
std::vector<std::vector<Card>> create_info_combos(std::vector<std::vector<Card>> start_combos, std::vector<std::vector<Card>> publics);

#endif // CARD_COMBOS_H
