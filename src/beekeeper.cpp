#include <iostream>

using namespace std;

struct Word {
    int s = -1;
    string w;
};

int main()
{
    char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
    string input;
    int n;

    while (cin >> n && n != 0) {
        Word bestW;

        while (n--) {
            int s = 0;

            cin >> input;

            for (int i = 0; i < input.size() - 1; ++i) {
                for (const auto &v : vowels) {
                    if (input[i] == input[i + 1] && input[i] == v) {
                        ++s;
                        break;
                    }
                }
            }

            if (s > bestW.s) {
                bestW.s = s;
                bestW.w = input;
            }
        }

        cout << bestW.w << '\n';
    }

    return 0;
}
