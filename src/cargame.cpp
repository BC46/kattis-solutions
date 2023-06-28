#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

struct DictEntry {
    string word;
    unordered_set<char> letters;
};

bool collectionContainsAllPlateLetters(const unordered_set<char> &col, const string &plate) {
    return all_of(plate.begin(), plate.end(),
                  [&col](const char &c) { return col.find(c) != col.end(); });
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<DictEntry> dict(n);
    string plate;

    for (auto &s : dict) {
        cin >> s.word;

        for (const auto &l : s.word)
            s.letters.emplace(l);
    }

    while (m--) {
        cin >> plate;

        transform(plate.begin(), plate.end(), plate.begin(),
                  [](const char &c) { return tolower(c); });

        const string* foundWord = nullptr;

        for (const auto &s : dict) {
            if (collectionContainsAllPlateLetters(s.letters, plate)) {
                int i = 0;

                for (const auto &l : s.word) {
                    if (l == plate[i])
                        ++i;

                    if (i == plate.size()) {
                        foundWord = &s.word;
                        break;
                    }
                }
            }

            if (foundWord != nullptr)
                break;
        }

        cout << (foundWord == nullptr ? "No valid word" : *foundWord) << '\n';
    }

    return 0;
}
