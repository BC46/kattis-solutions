#include <iostream>

using namespace std;

int main()
{
    unsigned long long total = 0;
    int m, t;

    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin >> t;
        total += t;
    }

    total /= m;

    cout << total << '\n';

    return 0;
}
