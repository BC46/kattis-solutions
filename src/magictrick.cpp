#include <iostream>

int main()
{
    bool can_guess = true;

    std::string cards;
    std::cin >> cards;

    for (size_t i = 0; i < cards.length(); i++) {
        for (size_t j = i + 1; j < cards.length(); j++) {
            if (cards[i] == cards[j]) {
                can_guess = false;
                break;
            }
        }
    }

    std::cout << can_guess;
    return 0;
}
