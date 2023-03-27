#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;

    while (p--) {
        int k, b;
        unsigned int n, a, ssd = 0;
        cin >> k >> b >> n;

        while (n > 0) {
            a = n % b;
            ssd += a * a;

            n /= b;
        }

        cout << k << " " << ssd << endl;
    }

    return 0;
}
