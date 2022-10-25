#include <iostream>

int main()
{
    int r, c;
    std::cin >> r >> c;
    char table[r][c];

    for (int y(0); y < r; ++y) {
        for (int x(0); x < c; ++x) {
            std::cin >> table[y][x];
        }
    }

    int parkingSpaces[5] { 0, 0, 0, 0, 0 };

    for (int y(0); y < r - 1; ++y) {
        for (int x(0); x < c - 1; ++x) {
            int cars(0);

            if (table[y][x] == 'X')
                ++cars;
            if (table[y + 1][x] == 'X')
                ++cars;
            if (table[y][x + 1] == 'X')
                ++cars;
            if (table[y + 1][x + 1] == 'X')
                ++cars;

            if (table[y][x] != '#' && table[y + 1][x] != '#' && table[y][x + 1] != '#' && table[y + 1][x + 1] != '#')
                ++parkingSpaces[cars];
        }
    }

    for (const auto &parkingSpace : parkingSpaces) {
        std::cout << parkingSpace << std::endl;
    }

    return 0;
}
