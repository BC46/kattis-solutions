#include <iostream>

using namespace std;

struct Time {
    int h, m, s;

    int totalS() {
        return h * 3600 + m * 60 + s;
    }
};

void printTimePart(int tp) {
    if (tp < 10)
        cout << '0';

    cout << to_string(tp);
}

int main()
{
    char _;

    Time ct, et;
    cin     >> ct.h >> _ >> ct.m >> _ >> ct.s
            >> et.h >> _ >> et.m >> _ >> et.s;

    int diff = et.totalS() - ct.totalS();

    if (diff <= 0)
        diff += 3600 * 24;

    int diffH = diff / 3600;

    if (diffH > 0)
        diff %= diffH * 3600;

    int diffM = diff / 60;

    if (diffM > 0)
        diff %= diffM * 60;

    printTimePart(diffH);
    cout << ':';
    printTimePart(diffM);
    cout << ':';
    printTimePart(diff);

    cout << '\n';
    return 0;
}
