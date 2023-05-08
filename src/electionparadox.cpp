#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, votes = 0;
    cin >> n;

    int halfP = n / 2;
    vector<int> p(n);

    for (int i = 0; i < n; ++i)
        cin >> p[i];

    sort(p.begin(), p.end(), greater<int>());

    for (int i = 0; i < halfP; ++i)
        votes += p[i];

    for (int i = halfP; i < n; ++i)
        votes += p[i] / 2;

    cout << votes << endl;
    return 0;
}
