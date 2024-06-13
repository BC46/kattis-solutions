#include <iostream>

using namespace std;

int main()
{
    int i;

    string n;
    cin >> n;

    for (i = 0; i < n.length(); ++i) {
        if (n[i] != (char) ('1' + i)) {
            cout << -1 << '\n';
            return 0;
        }
    }

    cout << i << '\n';

    return 0;
}
