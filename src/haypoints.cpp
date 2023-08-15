#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    unordered_map<string, int> dict;
    string word;
    int m, n, wordValue, money = 0;

    cin >> m >> n;

    while (m--) {
        cin >> word >> wordValue;
        dict.emplace(word, wordValue);
    }

    while (cin >> word) {
        if (word == ".") {
            cout << money << '\n';
            money = 0;

            continue;
        }

        auto it = dict.find(word);

        if (it != dict.end())
            money += it->second;
    }

    return 0;
}
