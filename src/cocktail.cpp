#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string result = "YES";

    int n, t;
    cin >> n >> t;

    vector<int> potions(n);

    for (int i = 0; i < n; ++i)
        cin >> potions[i];

    sort(potions.begin(), potions.end());

    for (int i = 0; i < potions.size(); ++i) {
        if (potions[i] - i * t < 1) {
            result = "NO";
            break;
        }
    }

    cout << result << '\n';
    return 0;
}
