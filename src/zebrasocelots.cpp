#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char c;
    unsigned long long n, total = 0;

    cin >> n;

    while (n--) {
        cin >> c;

        if (c == 'O')
            total += pow((long double) 2, (long double) n);
    }

    cout << total << '\n';
    return 0;
}
