#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int lower = n / 100 * 100 - 1;
    int upper = lower + 100;

    cout << (abs(n - lower) < abs(n - upper) && lower > -1 ? lower : upper) << '\n';
    return 0;
}
