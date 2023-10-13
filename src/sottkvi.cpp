#include <iostream>

using namespace std;

int main()
{
    int n, k, d, di, f = 0;
    cin >> n >> k >> d;

    while (n--) {
        cin >> di;

        if (di + 14 <= k + d)
            ++f;
    }

    cout << f << '\n';

    return 0;
}
