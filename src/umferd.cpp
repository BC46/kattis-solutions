#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string lane;
    int m, n, empty = 0;

    cin >> m >> n;
    int total = m * n;

    while (n--) {
        cin >> lane;

        for (auto &c : lane) {
            if (c == '.')
                ++empty;
        }
    }

    cout << (double) empty / (double) total;

    return 0;
}
