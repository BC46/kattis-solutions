#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long long n, d = 0;
    cin >> n;

    vector<int> items(n);

    for (int i = 0; i < n; ++i)
        cin >> items[i];

    sort(items.begin(), items.end(), greater());

    for (int i = 0; i < n; i += 3) {
        if (i + 2 < n)
            d += items[i + 2];
    }

    cout << d << endl;
    return 0;
}
