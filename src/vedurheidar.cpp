#include <iostream>

using namespace std;

int main()
{
    string si;

    int v, n, ki;
    cin >> v >> n;

    while (n--) {
        cin >> si >> ki;
        cout << si << ' ' << (v > ki ? "lokud" : "opin") << '\n';
    }

    return 0;
}
