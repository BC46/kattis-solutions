#include <iostream>

using namespace std;

bool willAttack(int aggressiveTime, int calmTime, int arrivalTime) {
    int combinedTime = aggressiveTime + calmTime;

    while (arrivalTime > combinedTime)
        arrivalTime -= combinedTime;

    return arrivalTime <= aggressiveTime;
}

int main()
{
    string results[3] = { "none", "one", "both" };

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arrivalTimes[3];
    cin >> arrivalTimes[0] >> arrivalTimes[1] >> arrivalTimes[2];

    for (const auto &arrivalTime : arrivalTimes) {
        int attacks = (int) willAttack(a, b, arrivalTime) + (int) willAttack(c, d, arrivalTime);

        cout << results[attacks] << '\n';
    }

    return 0;
}
