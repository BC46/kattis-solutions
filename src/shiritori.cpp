#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string word;
    int n, loser = 0;
    bool p2 = true;

    cin >> n >> word;

    char last = word.back();
    unordered_set<string> hist{ word };

    for (int i = 1; i < n; ++i) {
        cin >> word;

        if (loser)
            continue;

        if (hist.find(word) != hist.end() || word[0] != last) {
            loser = (int) p2 + 1;
            continue;
        }

        hist.emplace(word);

        p2 = !p2;
        last = word.back();
    }

    if (!loser)
        cout << "Fair Game\n";
    else
        cout << "Player " << loser << " lost\n";

    return 0;
}
