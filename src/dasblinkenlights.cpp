#include <iostream>

using namespace std;

int main()
{
    bool result{};
    int p, q, s;
    cin >> p >> q >> s;

    int highest = max(p, q), lowest = min(p, q);
    int current = highest;

    while (true) {
        if (current > s)
            break;

        if (current % lowest == 0) {
            result = true;
            break;
        }

        current += highest;
    }

    cout << (result ? "yes" : "no") << endl;
    return 0;
}
