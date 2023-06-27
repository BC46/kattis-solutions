#include <iostream>

using namespace std;

int main()
{
    bool done{};
    int h, w, n, input;

    cin >> h >> w >> n;

    int currentW = w;

    while (n--) {
        cin >> input;

        if (done)
            continue;

        currentW -= input;

        if (currentW == 0) {
            if (--h == 0)
                done = true;
            else
                currentW = w;
        }
    }

    cout << (h == 0 && currentW == 0 ? "YES" : "NO") << '\n';
    return 0;
}
