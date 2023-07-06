#include <iostream>

using namespace std;

int main()
{
    bool optimal{};

    int y;
    cin >> y;

    int firstOccurrenceMonths = 2018 * 12 + 4;
    int yMonth = y * 12 + 1;

    for (int i = 0; i < 12; ++i) {
        if ((yMonth - firstOccurrenceMonths) % 26 == 0) {
            optimal = true;
            break;
        }

        ++yMonth;
    }

    cout << (optimal ? "yes" : "no") << '\n';

    return 0;
}
