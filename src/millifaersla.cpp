#include <iostream>

using namespace std;

int main()
{
    string services[] = { "Monnei", "Fjee", "Dolladollabilljoll" };
    unsigned int lowest = -1, lowestIdx, a;

    for (int i = 0; i < 3; ++i) {
        cin >> a;

        if (a < lowest) {
            lowestIdx = i;
            lowest = a;
        }
    }

    cout << services[lowestIdx];

    return 0;
}
