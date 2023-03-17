#include <iostream>

using namespace std;

int main()
{
    int h, k, v, s, distance = 0;
    cin >> h >> k >> v >> s;

    while (h > 0) {
        v += s;
        v -= max(1, v / 10);

        if (v >= k)
            ++h;

        if (0 < v && v < k) {
            if (--h == 0)
                v = 0;
        }

        if (v <= 0) {
            h = 0;
            v = 0;
        }

        if (s > 0)
            --s;

        distance += v;
    }

    cout << distance << endl;
    return 0;
}
