#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    unsigned int k, n, dvd, current, result;
    cin >> k;

    while (k--) {
        current = 1;
        result = 0;

        cin >> n;

        while (n--) {
            cin >> dvd;

            if (dvd == current)
                ++current;
            else
                ++result;
        }

        cout << result << '\n';
    }

    return 0;
}
