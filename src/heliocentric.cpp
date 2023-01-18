#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line;
    int e, m, c = 1, eo = 365, mo = 687;

    while (std::getline(std::cin, line) && !line.empty()) {
        std::istringstream iss(line);
        iss >> e >> m;

        int o = 0;

        while (e > 0 || m > 0) {
            if (++e == eo)
                e = 0;
            if (++m == mo)
                m = 0;

            ++o;
        }

        cout << "Case " << c++ << ": " << o << endl;
    }

    return 0;
}
