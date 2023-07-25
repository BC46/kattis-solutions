#include <iostream>

using namespace std;

int main()
{
    bool reachedTop{};
    int a, b, h, currentHeight = 0, crawls = 0;

    cin >> a >> b >> h;

    for (; !reachedTop; ++crawls) {
        currentHeight += a;

        if (currentHeight >= h)
            reachedTop = true;

        currentHeight -= b;
    }

    cout << crawls << '\n';

    return 0;
}
