#include <iostream>
#include <vector>

using namespace std;

struct Flight {
    int u, v, c;
};

int main()
{
    int n, c, fc = 0;
    cin >> n;

    vector<Flight> flights(n * n);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> c;

            if (c > -1)
                flights[fc++] = Flight{ i, j, c };
        }
    }

    cout << fc << endl;

    for (int i = 0; i < fc; ++i)
        cout << flights[i].u << " " << flights[i].v << " " << flights[i].c << endl;

    return 0;
}
