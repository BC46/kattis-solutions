#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool hasWinner{};

    string name;
    unordered_map<string, int> scores;

    int n, p, m, score;
    cin >> n >> p >> m;

    while (n--) {
        cin >> name;
        scores.emplace(name, 0);
    }

    while (m--) {
        cin >> name >> score;

        auto it = scores.find(name);

        if (it->second >= p)
            continue;

        it->second += score;

        if (it->second >= p) {
            cout << name << " wins!\n";
            hasWinner = true;
        }
    }

    if (!hasWinner)
        cout << "No winner!\n";

    return 0;
}
