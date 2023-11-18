#include <iostream>

using namespace std;

int main()
{
    int a, l, n, kwf, total = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> a >> l;
        total += a * l;
    }

    cin >> n >> kwf;

    total = total / 5 * n / kwf;

    cout << total << '\n';

    return 0;
}
