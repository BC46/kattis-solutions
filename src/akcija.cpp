#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, total = 0;

    cin >> n;
    vector<int> prices(n + 1);
    prices[n] = 0;

    for (int i = 0; i < n; ++i)
        cin >> prices[i];

    sort(prices.begin(), prices.end(), greater());

    for (int i = 0; i < n; i += 3)
        total += prices[i] + prices[i + 1];

    cout << total << endl;
    return 0;
}
