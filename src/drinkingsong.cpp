#include <iostream>

using namespace std;

int main()
{
    int n;
    string beverage;

    cin >> n >> beverage;

    while (n > 0) {
        string end = (n == 1 ? "" : "s");

        cout << n << " bottle" << end << " of " << beverage << " on the wall, " << n << " bottle" << end << " of " << beverage << ".\n";

        end = (--n == 1 ? "" : "s");

        cout << "Take " << (n == 0 ? "it" : "one") << " down, pass it around, ";

        if (n == 0) cout << "no more bottles of " << beverage << ".\n";
        else        cout << n << " bottle" << end << " of " << beverage << " on the wall.\n\n";
    }

    return 0;
}
