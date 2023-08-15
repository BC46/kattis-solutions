#include <iostream>

typedef unsigned long long ul;

using namespace std;

ul h(ul n) {
    if (n == 1)
        return n;

    return n + h(n % 2 == 0 ? (n / 2) : (3 * n + 1));
}

int main()
{
    ul n;
    cin >> n;

    cout << h(n) << '\n';

    return 0;
}
