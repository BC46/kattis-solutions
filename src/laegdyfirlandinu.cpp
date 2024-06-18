#include <iostream>

using namespace std;

int main()
{
    bool result = false;
    int n, m;
    cin >> n >> m;

    int forecast[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> forecast[i][j];
        }
    }

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (forecast[i - 1][j] > forecast[i][j]
                && forecast[i + 1][j] > forecast[i][j]
                && forecast[i][j - 1] > forecast[i][j]
                && forecast[i][j + 1] > forecast[i][j]) {
                result = true;
            }
        }
    }

    cout << (result ? "Je" : "Nei") << "bb";

    return 0;
}
