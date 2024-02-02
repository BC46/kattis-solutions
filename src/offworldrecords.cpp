#include <iostream>

using namespace std;

int main()
{
    int n, c, p, a, result = 0;
    cin >> n >> c >> p;

    while (n--) {
        cin >> a;

        if (a > c + p) {
            p = c;
            c = a;

            ++result;
        }
    }

    cout << result << '\n';

    return 0;
}
