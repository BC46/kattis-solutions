#include <iostream>

using namespace std;

int main()
{
    int v, a, t;
    cin >> v >> a >> t;

    float d = v * t + 0.5f * a * t * t;
    cout << d << '\n';

    return 0;
}
