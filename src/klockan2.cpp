#include <iostream>

using namespace std;

string getTime(int angle) {
    int hour = 0, min = 0;

    while (true) {
        int hourHand = hour * 300 + min * 5;
        int minHand = min * 60;
        int calculatedAngle = hourHand > minHand
                ? 3600 - (hourHand - minHand)
                : minHand - hourHand;

        if (calculatedAngle == angle)
            break;

        if (++min == 60) {
            min = 0;
            ++hour;
        }
    }

    return (hour >= 10 ? "" : "0") + to_string(hour) + ":" + (min >= 10 ? "" : "0")  + to_string(min);
}

int main()
{
    int angle;
    cin >> angle;

    cout << getTime(angle) << endl;
    return 0;
}
