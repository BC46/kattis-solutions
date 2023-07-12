#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, total = 1;
    cin >> n >> x;

    vector<int> items(n);

    for (auto &item : items)
        cin >> item;

    sort(items.begin(), items.end());

    for (int i = 1; i < n; ++i) {
        if (items[i - 1] + items[i] > x)
            break;
        else
            ++total;
    }

    cout << total << '\n';

    return 0;
}
