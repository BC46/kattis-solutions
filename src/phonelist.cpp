#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<string> numbers(n);

        for (auto &num : numbers)
            cin >> num;

        sort(numbers.begin(), numbers.end());

        bool found{};

        for (int i = 1; i < n; ++i) {
            if (numbers[i].find(numbers[i - 1]) == 0) {
                found = true;
                break;
            }
        }

        cout << (found ? "NO" : "YES") << '\n';
    }

    return 0;
}
