#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string packageName;

    int t, b, versionNumber;
    cin >> t >> b;

    unordered_map<string, int> latestPackages;
    vector<int> packageAmounts(b);

    for (auto &packageAmount : packageAmounts)
        cin >> packageAmount;

    while (t--) {
        cin >> packageName >> versionNumber;
        latestPackages.emplace(packageName, versionNumber);
    }

    for (auto &packageAmount : packageAmounts) {
        int versionsteps = 0;

        for (int i = 0; i < packageAmount; ++i) {
            cin >> packageName >> versionNumber;
            versionsteps += latestPackages.find(packageName)->second - versionNumber;
        }

        cout << versionsteps << '\n';
    }

    return 0;
}
