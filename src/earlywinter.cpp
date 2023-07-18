#include <iostream>

using namespace std;

int main()
{
    int n, currentSummerGap, pastSummerGap, k = 0;
    cin >> n >> currentSummerGap;

    for (int i = 0; i < n; ++i) {
        cin >> pastSummerGap;

        if (pastSummerGap <= currentSummerGap)
            break;

        ++k;
    }

    if (k == n)
        cout << "It had never snowed this early!\n";
    else
        cout << "It hadn't snowed this early in " << k << " years!\n";

    return 0;
}
