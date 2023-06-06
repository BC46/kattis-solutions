#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float b;
    int k, g;

    cin >> b >> k >> g;

    int result = ceil(--b / (float) (k / g));

    cout << result << endl;
    return 0;
}
