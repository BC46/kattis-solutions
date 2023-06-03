#include <iostream>

using namespace std;

int main()
{
    string input;
    int right, d = 1;

    cin >> right;

    int mid = right / 2, left = 0;

    while (input != "exact") {
        cout << mid * d++ << endl;
        cin >> input;

        if (input == "less")
            right = mid - 1;
        else
            left = mid + 1;

        mid = (left + right) / 2;
    }

    return 0;
}
