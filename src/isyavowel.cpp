#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'y' };
    int n1 = 0, n2 = 0;

    string str;
    cin >> str;

    for (const auto &s : str) {
        bool isVowel = vowels.find(s) != vowels.end();

        if (s != 'y' && isVowel)
            ++n1;

        if (isVowel)
            ++n2;
    }

    cout << n1 << '\n' << n2 << '\n';

    return 0;
}
