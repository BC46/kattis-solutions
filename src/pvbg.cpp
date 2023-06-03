#include <iostream>
#include <climits>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned i, lowest = UINT_MAX;
    int n;

    cin >> n;

    while (n--) {
        cin >> i;

        if (i < lowest)
            lowest = i;
    }

    cout << lowest + 1 << '\n';
    return 0;
}
