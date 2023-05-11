#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    unordered_map<string, int> items{};

    string item;

    int n, m;
    cin >> n >> m;

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            cin >> item;

            auto it = items.find(item);

            if (it == items.end())
                items.insert({ item, 1 });
            else
                it->second++;
        }
    }

    vector<string> dups{};

    for (const auto &it: items) {
        if (it.second == n)
            dups.emplace_back(it.first);
    }

    cout << dups.size() << '\n';

    sort(dups.begin(), dups.end(), [](const string &a, const string &b) {
        return a < b;
    });

    for (const auto &d : dups)
        cout << d << '\n';

    return 0;
}
