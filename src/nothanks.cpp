#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, total = 0;
    cin >> n;

    vector<int> cards(n);

    for (auto &c : cards)
        cin >> c;

    sort(cards.begin(), cards.end());

    int last = cards[0], lowestConsecutive = 0;

    for (int i = 1; i < n; ++i) {
        if (last + 1 == cards[i]) {
            if (lowestConsecutive == 0)
                lowestConsecutive = last;
        } else {
            if (lowestConsecutive == 0) {
                total += last;
            } else {
                total += lowestConsecutive;
                lowestConsecutive = 0;
            }
        }

        last = cards[i];
    }

    if (lowestConsecutive == 0)
        total += last;
    else
        total += lowestConsecutive;

    cout << total << '\n';

    return 0;
}
