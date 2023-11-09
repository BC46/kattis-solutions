#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s, m, word;

    getline(cin, s);
    getline(cin, m);

    istringstream iss(m);

    while (iss >> m) {
        bool forbidden{};

        for (auto cm : m) {
            for (auto cs : s) {
                if (cm == cs) {
                    forbidden = true;
                    break;
                }
            }

            if (forbidden)
                break;
        }

        if (forbidden)
            cout << string(m.length(), '*');
        else
            cout << m;

        cout << ' ';
    }

    return 0;
}
