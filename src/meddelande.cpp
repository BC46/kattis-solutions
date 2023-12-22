#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string input, cols[m];

    while (n--) {
        cin >> input;

        for (int i = 0; i < m; ++i) {
            if (input[i] != '.')
                cols[i] += input[i];
        }
    }

    for (int i = 0; i < m; ++i)
        cout << cols[i];

    return 0;
}
