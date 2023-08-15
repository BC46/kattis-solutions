#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    bool flags[3] = { false, false, false };

    string input, result;
    cin >> input;

    for (int i = 0; i < input.length(); ++i) {
        if (input.length() - i >= 3) {
            for (int j = 0; j < 3; ++j) {
                if (input[i + j] == 'R')
                    flags[0] = true;
                else if (input[i + j] == 'B')
                    flags[1] = true;
                else if (input[i + j] == 'L')
                    flags[2] = true;
            }
        }

        if (flags[0] == flags[1] && flags[1] == flags[2] && flags[2]) {
            result += 'C';
            i += 2;
        } else {
            if (input[i] == 'R')
                result += 'S';
            else if (input[i] == 'B')
                result += 'K';
            else if (input[i] == 'L')
                result += 'H';
        }

        flags[0] = flags[1] = flags[2] = false;
    }

    cout << result << '\n';

    return 0;
}
