#include <iostream>
#include <vector>

using namespace std;

vector<int> dwarves(9);

int countWithSkips(int skip1, int skip2) {
    int result = 0;

    for (int i = 0; i < 9; ++i) {
        if (i != skip1 && i != skip2)
            result += dwarves[i];
    }

    return result;
}

int main()
{
    for (auto &d : dwarves)
        cin >> d;

    for (int i = 0; i < 8; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (countWithSkips(i, j) == 100) {
                for (int k = 0; k < 9; ++k) {
                    if (i != k && j != k)
                        cout << dwarves[k] << '\n';
                }

                return 0;
            }
        }
    }
}
