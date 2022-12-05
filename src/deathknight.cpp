#include <iostream>

using namespace std;

int main()
{
    int n;
    string k;

    cin >> n;
    int wins = n;

    while (n--) {
        cin >> k;

        for (int i = 0; i < k.length() - 1; ++i) {
            if (k[i] == 'C' && k[i + 1] == 'D') {
                --wins;
                break;
            }
        }
    }

    cout << wins << endl;
    return 0;
}
