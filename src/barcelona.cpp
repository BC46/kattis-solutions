#include <iostream>

using namespace std;

int main()
{
    int n, k, bag;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> bag;

        if (bag == k) {
            if (i == 1)
                cout << "naest";
            else if (i != 0)
                cout << i + 1 << ' ';

            cout << "fyrst";
            break;
        }
    }

    return 0;
}
