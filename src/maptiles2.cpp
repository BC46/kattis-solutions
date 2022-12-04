#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int totalX = 0, totalY = 0, num, wh = 2, levelWh = 2;
    int zl = s.length();

    int actualWh = pow(2, zl);

    for (int i = 0; i < zl; ++i) {
        num = s[i] - '0';

        totalX += num % wh * (actualWh / levelWh);
        totalY += num / wh * (actualWh / levelWh);

        levelWh *= 2;
    }

    cout << zl << " " << totalX << " " << totalY << std::endl;
    return 0;
}
