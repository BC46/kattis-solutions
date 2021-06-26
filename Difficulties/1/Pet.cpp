#include <iostream>

int main()
{
    int winner_number;
    int winner_points;

    for (size_t i = 1; i <= 5; i++) {
        int points = 0;

        for (size_t j = 0; j < 4; j++) {
            int point;
            std::cin >> point;

            points += point;
        }

        if (points > winner_points) {
            winner_number = i;
            winner_points = points;
        }
    }

    std::cout << winner_number << " " << winner_points;
    return 0;
}
