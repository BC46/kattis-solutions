#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int ds, ys, dm, ym, sunYears, moonYears, totalSunYears, totalMoonYears;
    cin >> ds >> ys >> dm >> ym;

    sunYears = ys - ds;
    moonYears = ym - dm;

    totalSunYears = sunYears;
    totalMoonYears = moonYears;

    unordered_map<int, void*> sunMap{}, moonMap{};
    sunMap.insert({ totalSunYears, nullptr });
    moonMap.insert({ totalMoonYears, nullptr });

    while (true) {
        if (sunMap.find(totalMoonYears) != sunMap.end()) {
            cout << totalMoonYears << endl;
            return 0;
        }

        if (moonMap.find(totalSunYears) != moonMap.end()) {
            cout << totalSunYears << endl;
            return 0;
        }

        totalSunYears += ys;
        totalMoonYears += ym;

        sunMap.insert({ totalSunYears, nullptr });
        moonMap.insert({ totalMoonYears, nullptr });
    }
}
