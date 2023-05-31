#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cin >> n;
        vector<long long> v1(n), v2(n);

        for (auto &v : v1)
            cin >> v;
        for (auto &v : v2)
            cin >> v;

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<>());

        long long minProduct = 0;

        for (int j = 0; j < n; ++j)
            minProduct += v1[j] * v2[j];

        cout << "Case #" << i << ": " << minProduct << '\n';
    }

    return 0;
}
