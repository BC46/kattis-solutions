#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int n, highestUnique = -1, diceRolls[6];
    cin >> n;

    vector<int> dice(n);
    memset(&diceRolls, 0x00, sizeof(diceRolls));

    for (auto &die : dice) {
        cin >> die;
        diceRolls[die - 1]++;
    }

    for (int i = 0; i < 6; ++i) {
        if (diceRolls[i] == 1)
            highestUnique = i + 1;
    }

    if (highestUnique == -1) {
        cout << "none\n";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (dice[i] == highestUnique) {
            cout << i + 1 << '\n';
            break;
        }
    }

    return 0;
}
