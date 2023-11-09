#include <iostream>

typedef unsigned long long ul;

ul result = 0;

using namespace std;

ul h(ul n) {
    ++result;

    if (n == 1)
        return n;

    return n + h(n % 2 == 0 ? (n / 2) : (3 * n + 1));
}

int main()
{
    ul n;
    cin >> n;

    h(n);

    cout << result << '\n';

    return 0;
}
