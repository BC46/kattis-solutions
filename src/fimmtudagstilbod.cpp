#include <iostream>

using namespace std;

int main()
{
    int price = 1000, n;
    cin >> n;

    if (n > 2020)
        price += (n - 2020) * 100;

    cout << price << '\n';

    return 0;
}
