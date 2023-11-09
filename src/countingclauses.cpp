#include <iostream>

using namespace std;

int main()
{
    int m, n, _;
    cin >> m >> n;

    for (int i = 0; i < m * n; ++i)
        cin >> _;

    if (m < 8)
        cout << "un";

    cout << "satisfactory\n";

    return 0;
}
