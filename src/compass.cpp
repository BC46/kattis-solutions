#include <iostream>

using namespace std;

int main()
{
    int n1, n2, output = 0;
    cin >> n1 >> n2;

    int diff = n1 - n2;

    if (diff > 180)
        output = 360 - diff;
    else if (diff < -180)
        output = -(diff + 360);
    else
        output = -diff;

    cout << output << endl;
    return 0;
}
