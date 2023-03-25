#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, lowest, gcd;
    cin >> a >> b;

    lowest = min(a, b);

    for (int i = lowest; i > 0; --i) {
        if (a % lowest == 0 && b % lowest == 0) {
            gcd = i;
        }
    }

    cout << gcd << endl;
    return 0;
}
