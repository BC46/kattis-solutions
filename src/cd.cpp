#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, input;

    while (true) {
        int total = 0;
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;

        vector<int> cds(n);

        for (auto &cd : cds)
            cin >> cd;

        while (m--) {
            cin >> input;

            if (binary_search(cds.begin(), cds.end(), input))
                ++total;
        }

        cout << total << '\n';
    }

    return 0;
}
