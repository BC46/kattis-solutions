#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, v;
    cin >> t;

    while (t--) {
        cin >> n;

        int max = -1, maxIndex, total = 0;
        bool noWinner{};

        for (int i = 1; i <= n; ++i) {
            cin >> v;

            if (v > max) {
                max = v;
                maxIndex = i;
                noWinner = false;
            } else if (v == max)
                noWinner = true;

            total += v;
        }

        if (noWinner)
            cout << "no winner\n";
        else
            cout << (max > (total / 2) ? "maj" : "min") << "ority winner " << maxIndex << '\n';
    }

    return 0;
}
