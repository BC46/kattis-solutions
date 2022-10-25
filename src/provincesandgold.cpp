#include <iostream>
#include <tuple>

int main()
{
    int card_amount = 3;

    std::tuple<std::string, int, int> victory_cards[3] = {
            std::make_tuple("Province", 8, 6),
            std::make_tuple("Duchy", 5, 3),
            std::make_tuple("Estate", 2, 1),
    };

    std::tuple<std::string, int, int> treasure_cards[3] = {
            std::make_tuple("Gold", 6, 3),
            std::make_tuple("Silver", 3, 2),
            std::make_tuple("Copper", 0, 1),
    };

    int g, s, c;
    std::cin >> g >> s >> c;
    int bp = std::get<2>(treasure_cards[0]) * g
    + std::get<2>(treasure_cards[1]) * s
    + std::get<2>(treasure_cards[2]) * c;

    for (size_t i = 0; i < card_amount; i++) {
        if (std::get<1>(victory_cards[i]) <= bp) {
            std::cout << std::get<0>(victory_cards[i]) << " or ";
            break;
        }
    }

    for (size_t i = 0; i < card_amount; i++) {
        if (std::get<1>(treasure_cards[i]) <= bp) {
            std::cout << std::get<0>(treasure_cards[i]) << std::endl;
            break;
        }
    }

    return 0;
}
