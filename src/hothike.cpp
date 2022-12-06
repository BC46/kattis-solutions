#include <iostream>
#include <vector>

using namespace std;

struct Day {
    int d{};
    int t = 41;
};

int main()
{
    Day bestDay{};
    vector<int> t(50);
    int n, max;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> t[i];

    for (int i = 0; i < n - 2; ++i) {
        max = t[i] > t[i + 2] ? t[i] : t[i + 2];

        if (max < bestDay.t) {
            bestDay.d = i + 1;
            bestDay.t = max;
        }
    }

    cout << bestDay.d << " " << bestDay.t << endl;
    return 0;
}
