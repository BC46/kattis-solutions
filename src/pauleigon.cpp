#include <iostream>

using namespace std;

int main()
{
    int n, p, q, switches;
    cin >> n >> p >> q;

    switches = (p + q) / n;

    cout << (switches % 2 == 0 ? "paul" : "opponent") << std::endl;
    return 0;
}
