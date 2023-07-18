#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m, slMinSum = 0;
    int n, s, secSum = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> m >> s;

        slMinSum += m;
        secSum += s;
    }

    double slAvg = secSum / (slMinSum * 60);

    if (slAvg <= 1.0)
        cout << "measurement error\n";
    else
        cout << setprecision(10) << slAvg;

    return 0;
}
