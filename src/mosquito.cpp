#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string line;
    int m, p, l, e, r, s, n;

    while (getline(cin, line) && !line.empty()) {
        istringstream iss(line);
        iss >> m >> p >> l >> e >> r >> s >> n;

        while (n--) {
            int newP = l / r;

            l = m * e;

            m = p / s;
            p = newP;
        }

        cout << m << endl;
    }

    return 0;
}
