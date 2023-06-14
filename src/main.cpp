#include "Card.h"
#include "CardCombos.h"
#include <omp/HandEvaluator.h>
#include <iostream>

using namespace omp;

int main() {
    HandEvaluator eval;
    Hand h = Hand::empty(); // Final hand must include empty() exactly once!
    h += Hand(51) + Hand(48) + Hand(0) + Hand(1) + Hand(2); // AdAs2s2h2c
    std::cout << eval.evaluate(h) << std::endl; // 28684 = 7 * 4096 + 12

    std::vector<Card> cards;
    for (int rank = 2; rank <= 14; rank++) {
        for (std::string suit : {"hearts", "diamonds", "clubs", "spades"}) {
            cards.push_back(Card(rank, suit));
        }
    }

    auto starting_hands = get_combinations(cards, 2);
    auto flop = create_info_combos(starting_hands, get_combinations(cards, 3));
    // auto turn = create_info_combos(starting_hands, get_combinations(cards, 4));
    // auto river = create_info_combos(starting_hands, get_combinations(cards, 5));

    // Print the number of combinations for each stage
    std::cout << "Flop combinations: " << flop.size() << std::endl;
    // std::cout << "Turn combinations: " << turn.size() << std::endl;
    // std::cout << "River combinations: " << river.size() << std::endl;
    Card card(14, "hearts");
    card.print();

    Card card2(10, "clubs");
    card2.print();
    return 0;
}
