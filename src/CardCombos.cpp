#include "CardCombos.h"
#include <algorithm>
#include <string>

std::vector<std::vector<Card>> get_combinations(std::vector<Card> cards, int num_cards) {
    std::vector<std::vector<Card>> combinations;
    std::string bitmask(num_cards, '1'); // K leading 1's
    bitmask.resize(cards.size(), '0'); // N-K trailing 0's

    // permute bitmask
    do {
        std::vector<Card> combo;
        for (int i = 0; i < cards.size(); i++) {
            if (bitmask[i] == '1') {
                combo.push_back(cards[i]);
            }
        }
        combinations.push_back(combo);
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
    return combinations;
}

std::vector<std::vector<Card>> create_info_combos(std::vector<std::vector<Card>> start_combos, std::vector<std::vector<Card>> publics) {
    std::vector<std::vector<Card>> info_combos;
    for (auto& combo : start_combos) {
        for (auto& public_combo : publics) {
            std::vector<Card> hand(combo);
            hand.insert(hand.end(), public_combo.begin(), public_combo.end());
            info_combos.push_back(hand);
        }
    }
    return info_combos;
}
