#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool result = true;

    int n, x, a;

    cin >> n >> x;

    while (n--) {
        cin >> a;

        if (!result)
            continue;

        x -= a;

        if (x < 0)
            result = false;
    }

    cout << (result ? "Jebb" : "Neibb") << '\n';

    return 0;
}
