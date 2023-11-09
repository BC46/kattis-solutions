#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, n;
    cin >> a >> n;

    double radius = n / M_PI / 2;
    double maxArea = radius * radius * M_PI;

    cout << (maxArea >= a ? "Diablo is happy!" : "Need more materials!") << '\n';

    return 0;
}
