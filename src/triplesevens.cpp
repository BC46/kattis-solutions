#include <iostream>

using namespace std;

int main()
{
    bool bad = false;
    int n, digit;

    cin >> n;

    for (int i = 0; i < 3; ++i) {
        bool hasSeven = false;

        for (int j = 0; j < n; ++j) {
            cin >> digit;

            if (digit == 7)
                hasSeven = true;
        }

        if (!hasSeven)
            bad = true;
    }

    cout << (bad ? 0 : 777) << '\n';

    return 0;
}
