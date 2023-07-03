#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };

    string line, word;

    while (getline(cin, line)) {
        istringstream iss(line);

        while (iss >> word) {
            bool startsWithVowel{};

            for (const auto &v : vowels) {
                if (v == word[0]) {
                    startsWithVowel = true;
                    break;
                }
            }

            if (startsWithVowel) {
                cout << word << "yay ";
            } else {
                int firstVowelIndex = 0;

                for (int i = 1; i < word.size(); ++i) {
                    for (const auto &v : vowels) {
                        if (v == word[i]) {
                            firstVowelIndex = i;
                            break;
                        }
                    }

                    if (firstVowelIndex > 0)
                        break;
                }

                cout << word.substr(firstVowelIndex) << word.substr(0, firstVowelIndex) << "ay ";
            }
        }

        cout << '\n';
    }

    return 0;
}
