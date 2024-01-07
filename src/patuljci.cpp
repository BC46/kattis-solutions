#include <iostream>

using namespace std;

int main()
{
    int dwarves[9], total = 0;

    for (auto &d : dwarves) {
        cin >> d;
        total += d;
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (total - dwarves[i] - dwarves[j] != 100)
                continue;

            for (int k = 0; k < 9; ++k) {
                if (i != k && j != k)
                    cout << dwarves[k] << '\n';
            }

            return 0;
        }
    }
}
