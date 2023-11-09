#include <iostream>

using namespace std;

struct Corn {
    int a, l;
};

int main()
{
    Corn corns[5];

    int n, kwf, total = 0;

    for (auto &corn : corns)
        cin >> corn.a >> corn.l;

    cin >> n >> kwf;

    for (auto &corn : corns)
        total += corn.a * corn.l;

    total = total / 5 * n / kwf;

    cout << total << '\n';

    return 0;
}
