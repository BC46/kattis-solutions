#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int s;
    string os;

    bool operator < (const Time& other) const {
        return s < other.s;
    }
};

int main()
{
    char c;
    string t, line;
    int n, h, m;

    while (cin >> n && n > 0) {
        vector<Time> times(n);

        cin.ignore();

        for (auto &time : times) {
            getline(cin, line);

            istringstream iss(line);
            iss >> h >> c >> m >> t;

            time.s = h * 60 + (t == "p.m." ? 12 * 60 : 0) + m;

            if (h == 12)
                time.s -= 12 * 60;

            time.os = line;
        }

        sort(times.begin(), times.end());

        for (const auto &time : times)
            cout << time.os << '\n';

        cout << '\n';
    }

    return 0;
}
