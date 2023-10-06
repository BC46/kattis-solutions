#include <iostream>

using namespace std;

int main()
{
    string input[2], result[4];

    for (int i = 0; i < 2; ++i) {
        getline(cin, input[i]);

        size_t charPos = input[i].find('|');

        result[i] = input[i].substr(0, charPos);
        result[i + 2] = input[i].substr(charPos + 1);
    }

    for (int i = 0; i < 4; ++i) {
        cout << result[i];

        if (i == 1)
            cout << ' ';
    }

    return 0;
}
