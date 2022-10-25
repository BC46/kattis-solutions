#include <iostream>
#include <math.h>

int main()
{
    int points = 0;
    int sets = 0;

    int tablet_count = 0;
    int compass_count = 0;
    int gear_count = 0;

    std::string cards;
    std::cin >> cards;
    for (char card : cards) {
        if (card == 'T') ++tablet_count;
        else if (card == 'C') ++compass_count;
        else if (card == 'G') ++gear_count;

        if (tablet_count >= sets + 1 && compass_count >= sets + 1 && gear_count >= sets + 1) {
            ++sets;
        }
    }

    points += sets * 7;

    points += pow(tablet_count, 2);
    points += pow(compass_count, 2);
    points += pow(gear_count, 2);

    std::cout << points << std::endl;
    return 0;
}
