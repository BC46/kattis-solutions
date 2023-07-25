#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    bitset<36> outcomes;

    while (n--) {
        cin >> a;

        int max = a <= 6 ? a - 1 : 6;

        for (int d1 = 1; d1 <= max; ++d1) {
            for (int d2 = 1; d2 <= max; ++d2) {
                if (d1 + d2 == a) {
                    outcomes.set((d1 - 1) * 6 + d2 - 1);
                }
            }
        }
    }

    cout << ((double) outcomes.count() / 36) << '\n';

    return 0;
}
