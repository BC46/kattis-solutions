#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string result;
    float r, f, degreesRotated, remainingDegrees;
    cin >> r >> f;

    degreesRotated = (f * 180) / r;
    remainingDegrees = fmod(degreesRotated, 180.0f);

    int flips = static_cast<int>(degreesRotated / 180.0f);

    if (flips % 2 == 0) {
        if (remainingDegrees > 90)
            result = "down";
        else
            result = "up";
    } else {
        if (remainingDegrees > 90)
            result = "up";
        else
            result = "down";
    }

    cout << result << endl;
    return 0;
}
