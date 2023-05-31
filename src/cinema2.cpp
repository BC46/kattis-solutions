#include <iostream>

using namespace std;

int main()
{
    int n, m, g, ng = 0;
    cin >> n >> m;

    while (m--) {
        cin >> g;

        if ((n -= g) < 0)
            ++ng;
    }

    cout << ng << '\n';
    return 0;
}
