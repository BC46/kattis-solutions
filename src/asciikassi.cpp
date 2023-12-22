#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string topBottom = '+' + string(n, '-') + "+\n";
    string center = '|' + string(n, ' ') + "|\n";

    cout << topBottom;

    while (n--)
        cout << center;

    cout << topBottom;

    return 0;
}
