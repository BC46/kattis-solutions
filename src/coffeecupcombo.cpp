#include <iostream>

int main()
{
    std::string input;
    int n, coffeeCount = 0, awakeLectures = 0;

    std::cin >> n >> input;
    for (const auto &coffee : input) {
        if (coffee == '1')
            coffeeCount = 2;

        if (coffeeCount > 0) {
            --coffeeCount;
            ++awakeLectures;
        }

        if (coffee == '1')
            coffeeCount = 2;
    }

    std::cout << awakeLectures << std::endl;
    return 0;
}
