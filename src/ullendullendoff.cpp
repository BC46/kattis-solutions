#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> friends(n);

    for (auto &f: friends)
        cin >> f;

    if (13 % n == 0)
        cout << friends[n - 1] << '\n';
    else
        cout << friends[(13 % n) - 1] << '\n';

    return 0;
}
