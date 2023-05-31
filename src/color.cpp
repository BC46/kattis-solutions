#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s, c, k, wmA = 1, currentCapacity = 1;
    cin >> s >> c >> k;

    vector<int> socks(s);

    for (auto &sock : socks)
        cin >> sock;

    sort(socks.begin(), socks.end());

    int firstSock = socks[0];

    for (int i = 1; i < s; ++i) {
        if (currentCapacity < c && socks[i] - firstSock <= k)
            ++currentCapacity;
        else {
            ++wmA;
            firstSock = socks[i];
            currentCapacity = 1;
        }
    }

    cout << wmA << endl;
    return 0;
}
