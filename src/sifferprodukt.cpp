#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    string s = to_string(x);

    while (x < 1 || x > 9) {
        x = 1;

        for (const auto &c : s) {
            if (c != '0')
                x *= c - '0';
        }

        s = to_string(x);
    }

    cout << x << endl;
    return 0;
}
