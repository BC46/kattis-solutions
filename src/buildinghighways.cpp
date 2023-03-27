#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned long long n, lowest = 1000000, total = 0;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        if (a[i] < lowest)
            lowest = a[i];
    }

    for (int i = 0; i < n; ++i)
        total += a[i] + lowest;

    total -= lowest * 2;

    cout << total << endl;
    return 0;
}
