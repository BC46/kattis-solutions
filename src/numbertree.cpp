#include <iostream>
#include <string>

using namespace std;

int main()
{
    int h, current = 3, subtractor = 0;
    char prev = '0';
    string s;

    cin >> h;
    cin.ignore();
    getline(cin, s);

    for (int i = 2; i <= h; ++i) {
        current *= 2;
        current += 1;
    }

    for (const auto &c : s) {
        if (c == 'L') {
            if (prev == '0')
                subtractor = 1;
            else
                subtractor *= 2;

            if (prev == 'R')
                subtractor -= 1;
        } else if (c == 'R') {
            if (prev == '0')
                subtractor = 2;
            else
                subtractor *= 2;

            if (prev == 'L')
                subtractor += 1;
        }

        current -= subtractor;
        prev = c;
    }

    cout << current << endl;
    return 0;
}
