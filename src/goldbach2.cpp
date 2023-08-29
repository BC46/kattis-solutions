#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> primes { 2 };

    for (int i = 2; i < 32000; ++i) {
        int j = 2;

        for (; j <= i - 1; ++j) {
            if (i % j == 0)
                break;
        }

        if (i == j && j != 2)
            primes.emplace_back(i);
    }

    int n, x;
    cin >> n;

    while (n--) {
        cin >> x;

        list<pair<int, int>> combos;

        for (int i = 0; i < primes.size(); ++i) {
            if (primes[i] > x / 2)
                break;

            for (int j = i; j < primes.size(); ++j) {
                if (primes[i] + primes[j] > x)
                    break;

                if (primes[i] + primes[j] == x)
                    combos.emplace_back(primes[i], primes[j]);
            }
        }

        cout << x << " has " << combos.size() << " representation(s)\n";

        for (const auto &c : combos)
            cout << c.first << '+' << c.second << '\n';

        cout << '\n';
    }

    return 0;
}
