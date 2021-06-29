#include <iostream>
#include <tuple>
#include <map>

int main()
{
    int sum = 0;

    std::map<char, std::tuple<int, int>> value_table = {
            {'A', std::make_tuple(11, 11)},
            {'K', std::make_tuple(4, 4)},
            {'Q', std::make_tuple(3, 3)},
            {'J', std::make_tuple(20, 2)},
            {'T', std::make_tuple(10, 10)},
            {'9', std::make_tuple(14, 0)},
            {'8', std::make_tuple(0, 0)},
            {'7', std::make_tuple(0, 0)},
    };

    int n;
    char b;

    std::cin >> n >> b;

    for (size_t i = 0; i < n * 4; i++) {
        char number, suit;
        std::cin >> number >> suit;

        auto value = value_table.find(number)->second;

        if (suit == b) {
            sum += std::get<0>(value);
        } else {
            sum += std::get<1>(value);
        }
    }

    std::cout << sum << std::endl;
    return 0;
}
