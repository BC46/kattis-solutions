#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> letterOccurrences;

    string input;
    cin >> input;

    for (const auto &c : input) {
        auto it = letterOccurrences.find(c);

        if (it == letterOccurrences.end())
            letterOccurrences.emplace(c, 1);
        else
            it->second++;
    }

    int unevenCount = 0;

    for (const auto &o : letterOccurrences) {
        if (o.second % 2 > 0)
            ++unevenCount;
    }

    cout << (unevenCount > 1 ? unevenCount - 1 : 0) << '\n';

    return 0;
}
