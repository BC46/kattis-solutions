#include <iostream>

using namespace std;

int main()
{
    string input;
    int left = 1, mid = 500, right = 1000;

    while (input != "correct") {
        cout << mid << endl;
        cin >> input;

        if (input == "lower")
            right = mid - 1;
        else
            left = mid + 1;

        mid = (left + right) / 2;
    }

    return 0;
}
