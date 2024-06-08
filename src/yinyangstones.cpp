#include <iostream>

using namespace std;

int main()
{
    int bCount = 0, wCount = 0;

    string s;
    cin >> s;

    for (const auto &c : s) {
        if (c == 'W')
            wCount++;
        else
            bCount++;
    }

    cout << (wCount == bCount ? 1 : 0) << '\n';

    return 0;
}
