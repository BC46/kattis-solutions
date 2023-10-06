#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool possible = true;
    int n, bi, gi, g = 0;

    cin >> n;

    while (n--) {
        cin >> bi >> gi;

        if (!possible)
            continue;

        g += bi;

        if (g < gi)
            possible = false;
    }

    cout << (possible ? "" : "im") << "possible\n";

    return 0;
}
