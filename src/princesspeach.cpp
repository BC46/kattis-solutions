#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, y, o, x = 0;

    cin >> n >> y;

    bool obstacles[n];
    memset(obstacles, 0x0, n);

    while (y--) {
        cin >> o;

        if (o < n && !obstacles[o]) {
            obstacles[o] = true;
            ++x;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (!obstacles[i])
            cout << i << '\n';
    }

    cout << "Mario got " << x << " of the dangerous obstacles.\n";

    return 0;
}
