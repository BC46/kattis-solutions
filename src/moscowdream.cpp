#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    bool result = a > 0 && b > 0 && c > 0 && a + b + c >= n && n >= 3;

    cout << (result ? "YES" : "NO") << endl;
    return 0;
}
