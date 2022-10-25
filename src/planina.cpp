#include <iostream>
#include <math.h>

int main()
{
    int n;
    int points_per_row = 2;
    int square_per_row = 1;
    int points = 0;

    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        points = (points_per_row + square_per_row) * (points_per_row + square_per_row);

        points_per_row += square_per_row;
        square_per_row *= 2;
    }

    std::cout << points;
    return 0;
}
