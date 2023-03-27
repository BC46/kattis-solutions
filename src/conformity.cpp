#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    unordered_map<std::string, int> combos{};

    int n;
    cin >> n;

    while (n--) {
        string combo;
        vector<int> sortedC(5);

        for (int i = 0; i < 5; ++i) {
            cin >> sortedC[i];
        }

        sort(sortedC.begin(), sortedC.end());

        for (int i = 0; i < 5; ++i) {
            combo += to_string(sortedC[i]);
        }

        auto it = combos.find(combo);

        if (it == combos.end())
            combos.insert({ combo, 1 });
        else
            it->second++;
    }

    int highest = 1, total = 0;

    for (const auto &it: combos) {
        if (it.second > highest)
            highest = it.second;
    }

    for (const auto &it: combos) {
        if (it.second == highest)
            total += highest;
    }

    cout << total << endl;
    return 0;
}
