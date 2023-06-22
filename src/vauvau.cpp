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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arrivalTimes[3];
    cin >> arrivalTimes[0] >> arrivalTimes[1] >> arrivalTimes[2];

    for (auto &arrivalTime : arrivalTimes) {
        int attacks = (int) willAttack(a, b, arrivalTime) + (int) willAttack(c, d, arrivalTime);

        if (attacks == 0)
            cout << "none\n";
        else if (attacks == 1)
            cout << "one\n";
        else
            cout << "both\n";
    }

    return 0;
}
