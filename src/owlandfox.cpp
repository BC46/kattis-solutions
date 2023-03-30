#include <iostream>

using namespace std;

int digitSum(int value) {
    int sum = 0;
    string valueString = to_string(value);

    for (const auto &c : valueString)
        sum += c - '0';

    return sum;
}

int main()
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int sum = digitSum(n);


        for (int i = n; i >= 0; --i) {
            if (digitSum(i) < sum) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
