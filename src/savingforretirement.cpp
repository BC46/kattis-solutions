#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int b, br, bs, a, as;
    cin >> b >> br >> bs >> a >> as;

    int bobSaveAmount = (br - b) * bs;
    int aliceSaveYears = ceil((float) bobSaveAmount / (float) as);

    if (aliceSaveYears * as == bobSaveAmount)
        ++aliceSaveYears;

    cout << a + aliceSaveYears << '\n';
    return 0;
}
