#include <iostream>

using namespace std;

int main()
{
    int result = 0;

    string input;
    cin >> input;

    for (const auto &c : input) {
        if (c == 'u')
            ++result;
    }

    cout << result << '\n';

    return 0;
}
