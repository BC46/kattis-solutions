#include <iostream>

using namespace std;

int main()
{
    long candies;
    int t, n;
    cin >> t;

    while (t--) {
        int total = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> candies;
            total += candies % n;
        }

        cout << (total % n == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
