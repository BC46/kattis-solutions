#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p, maxProfit = 0, currentProfit = 0;
    cin >> n >> p;

    vector<int> profits(n);
    for (int i = 0; i < n; ++i) {
        cin >> profits[i];
        profits[i] -= p;
    }

    for (int i = 0; i < n; ++i) {
        if (currentProfit + profits[i] < 0) {
            currentProfit = 0;
            continue;
        }

        currentProfit += profits[i];

        if (currentProfit > maxProfit)
            maxProfit = currentProfit;
    }

    cout << maxProfit << std::endl;
    return 0;
}
