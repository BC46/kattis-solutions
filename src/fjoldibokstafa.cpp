#include <iostream>

using namespace std;

int main()
{
    int letters = 0;
    string input;

    cin >> input;

    for (auto &c : input) {
        c = tolower(c);

        if (c >= 'a' && c <= 'z')
            ++letters;
    }

    cout << letters << '\n';

    return 0;
}
