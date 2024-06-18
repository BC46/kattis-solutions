#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n, s, l, r;
    cin >> n >> s;

    while (n--) {
        cin >> l >> r;

        if (l <= s && s <= r)
            ++s;
    }

    cout << s;

    return 0;
}
