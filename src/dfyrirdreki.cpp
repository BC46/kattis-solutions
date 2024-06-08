#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int abc = b * b - 4 * a * c;

    if (abc == 0)
        cout << 1;
    else if (abc < 0)
        cout << 0;
    else
        cout << 2;

    return 0;
}
