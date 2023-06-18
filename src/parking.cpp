#include <iostream>

using namespace std;

struct Truck {
    int a, d;
};

int main()
{
    int lowestA = 100, highestD = 1, total = 0;
    int prices[3];
    Truck trucks[3];

    for (auto &p : prices)
        cin >> p;

    for (auto &t : trucks) {
        cin >> t.a >> t.d;

        if (t.a < lowestA)
            lowestA = t.a;
        if (t.d > highestD)
            highestD = t.d;
    }

    for (int i = lowestA; i <= highestD; ++i) {
        int truckAmount = 0;

        for (const auto &t : trucks) {
            if (i > t.a && i <= t.d)
                ++truckAmount;
        }

        if (truckAmount > 0)
            total += truckAmount * prices[truckAmount - 1];
    }

    cout << total << '\n';
    return 0;
}
