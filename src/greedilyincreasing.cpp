#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int n, num, c = 0, largest = 0;
    cin >> n;

    unsigned int a[n];

    while (n--) {
        cin >> num;

        if (num > largest) {
            largest = num;
            a[c++] = num;
        }
    }

    cout << to_string(c) + '\n';

    for (int i = 0; i < c; ++i)
        cout << to_string(a[i]) + ' ';

    return 0;
}
