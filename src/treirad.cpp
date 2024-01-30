#include <iostream>

using namespace std;

int main() {
    int n, tripletSum, i = 1;

    cin >> n;

    while (true) {
        tripletSum = i * (i + 1) * (i + 2);

        if (tripletSum >= n)
            break;

        ++i;
    }

    cout << i - 1;

    return 0;
}
