#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int wordAmount = 0, wordComboCount = 0;
    set<string> wordCombos{};
    vector<string> words(100);
    vector<string> sortedWords(10000);
    string word;

    while (cin >> word)
        words[wordAmount++] = word;

    sort(words.begin(), words.begin() + wordAmount);

    for (int i = 0; i < wordAmount - 1; ++i) {
        for (int j = 1; j < wordAmount; ++j) {
            if (words[i] != words[j]) {
                sortedWords[wordComboCount++] = words[i] + words[j];
                sortedWords[wordComboCount++] = words[j] + words[i];
            }
        }
    }

    for (int i = 0; i < wordComboCount; ++i)
        wordCombos.insert(sortedWords[i]);

    for (const auto &wordCombo : wordCombos)
        cout << wordCombo << "\n";

    return 0;
}
