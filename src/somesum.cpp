#include <iostream>

using namespace std;

int main()
{
    int n, sums[2] = { 0, 0 }, evenAmount = 0;
    cin >> n;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j)
            sums[i] += i + j;
    }

    for (const auto &sum : sums)
        evenAmount += (int) (sum % 2 == 0);

    if (evenAmount == 2)
        cout << "Even\n";
    else if (evenAmount == 1)
        cout << "Either\n";
    else
        cout << "Odd\n";

    return 0;
}
