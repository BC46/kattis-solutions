#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Runner {
    string name;
    float first, flying;
};

struct Result {
    Runner first;
    Runner flying[3];
    float time;
};

int main()
{
    int n;
    cin >> n;

    vector<Runner> runnersByFirst(n);

    for (auto &r : runnersByFirst)
        cin >> r.name >> r.first >> r.flying;

    vector<Runner> runnersByFlying(runnersByFirst.begin(), runnersByFirst.end());

    sort(runnersByFirst.begin(), runnersByFirst.end(), [](const Runner &a, const Runner &b) { return a.first < b.first; });
    sort(runnersByFlying.begin(), runnersByFlying.end(), [](const Runner &a, const Runner &b) { return a.flying < b.flying; });

    vector<Result> results(n);

    for (int i = 0; i < n; ++i) {
        results[i].first = runnersByFirst[i];
        results[i].time = runnersByFirst[i].first;

        for (int j = 0, k = 0; k < 3; ++j) {
            if (results[i].first.name != runnersByFlying[j].name) {
                results[i].flying[k++] = runnersByFlying[j];
                results[i].time += runnersByFlying[j].flying;
            }
        }
    }

    auto it = min_element(results.begin(), results.end(), [](const Result &a, const Result &b) { return a.time < b.time; });

    cout << it->time << '\n' << it->first.name << '\n';

    for (auto &r : it->flying)
        cout << r.name << '\n';

    return 0;
}
