#include <iostream>
#include <vector>

using namespace std;

struct Rung {
    int l1, l2;
};

int main()
{
    int n, m, r;
    cin >> n >> m;

    vector<Rung> rungs(m);
    vector<int> perms(n);

    for (int i = 0; i < m; ++i) {
        cin >> r;
        rungs[i] = Rung{ r, r + 1 };
    }

    for (int i = 1; i <= n; ++i) {
        r = i;
        int current = 0;

        while (current < m) {
            if (rungs[current].l1 == r)
                r = rungs[current].l2;
            else if (rungs[current].l2 == r)
                r = rungs[current].l1;

            ++current;
        }

        perms[r - 1] = i;
    }

    for (const auto &perm : perms)
        cout << perm << endl;

    return 0;
}
