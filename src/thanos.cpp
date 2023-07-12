#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double p, r, f;
    int t;

    cin >> t;

    while (t--) {
        int years = 0;

        cin >> p >> r >> f;

        while (f >= p) {
            p *= r;
            ++years;
        }

        cout << years << '\n';
    }

    return 0;
}
