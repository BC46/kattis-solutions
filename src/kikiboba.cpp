#include <iostream>

using namespace std;

int main()
{
    int k = 0, b = 0;

    string input;
    cin >> input;

    for (auto &c : input) {
        if (c == 'k')
            ++k;
        else if (c == 'b')
            ++b;
    }

    if (b > k)
        cout << "boba";
    else if (k > b)
        cout << "kiki";
    else if (k == 0 && b == 0)
        cout << "none";
    else
        cout << "boki";

    return 0;
}
