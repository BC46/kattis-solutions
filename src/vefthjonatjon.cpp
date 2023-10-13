#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char part;
    int sp[] = { 0, 0, 0 };
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (auto &j : sp) {
            cin >> part;

            if (part == 'J')
                ++j;
        }
    }

    sort(sp, sp + 3);

    cout << sp[0] << '\n';

    return 0;
}
