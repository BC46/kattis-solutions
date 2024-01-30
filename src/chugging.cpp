#include <iostream>

using namespace std;

int main()
{
    int n, ta, da, tb, db, alice = 0, bob = 0;
    cin >> n >> ta >> da >> tb >> db;

    for (int i = 0; i < n; ++i) {
        alice += ta + da * i;
        bob += tb + db * i;
    }

    if (alice == bob)
        cout << "=";
    else if (alice < bob)
        cout << "Alice";
    else
        cout << "Bob";

    return 0;
}
