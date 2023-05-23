#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GetCorresponding(short number, const vector<short> &l1, const vector<short> &l2) {
    auto it = lower_bound(l1.begin(), l1.end(), number);
    if (it == l1.end() || *it != number)
        return 0;

    return l2[distance(l1.begin(), it)];
}

int main()
{
    short amount;
    cin >> amount;

    while (amount > 0) {
        vector<short> l1(amount), l1Sorted(amount), l2(amount);

        for (int i = 0; i < amount; ++i) {
            cin >> l1[i];
            l1Sorted[i] = l1[i];
        }

        for (int i = 0; i < amount; ++i)
            cin >> l2[i];

        sort(l1Sorted.begin(), l1Sorted.end());
        sort(l2.begin(), l2.end());

        for (const auto &i : l1)
            cout << GetCorresponding(i, l1Sorted, l2) << endl;

        cout << '\n';
        cin >> amount;
    }

    return 0;
}
