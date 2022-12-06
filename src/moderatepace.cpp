#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> dists(n);

    for (int j = 0; j < n; ++j)
        dists[j] = vector<int>(3);

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dists[j][i];

    for (int j = 0; j < n; ++j) {
        sort(dists[j].begin(), dists[j].end());

        cout << dists[j][1] << " ";
    }

    return 0;
}
