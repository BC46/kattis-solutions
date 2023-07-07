#include <iostream>

using namespace std;

int main()
{
    string testCase;

    int p, t, solved = 0;
    cin >> p >> t;

    while (p--) {
        bool allSolved = true;

        for (int i = 0; i < t; ++i) {
            cin >> testCase;

            if (!allSolved)
                continue;

            for (int j = 1; j < testCase.size(); ++j) {
                if (testCase[j] >= 'A' && testCase[j] <= 'Z')
                    allSolved = false;
            }
        }

        if (allSolved)
            ++solved;
    }

    cout << solved << '\n';

    return 0;
}
