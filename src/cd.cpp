#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> cds;

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, input;

    while (true) {
        int total = 0;
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;

        while (n--) {
            cin >> input;
            cds.insert(input);
        }

        while (m--) {
            cin >> input;

            if (cds.find(input) != cds.end())
                ++total;
        }

        cout << total << '\n';

        cds.clear();
    }

    return 0;
}
