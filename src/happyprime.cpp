#include <iostream>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; ++i) {
        if (num % i == 0)
            return false;
    }

    return num != 1;
}

bool isHappy(int num) {
    string mStr = to_string(num);

    while (num != 1 && num != 4) {
        int squareSum = 0;

        for (const auto &c : mStr)
            squareSum += (c - '0') * (c - '0');

        num = squareSum;
        mStr = to_string(num);
    }

    return num == 1;
}

int main()
{
    int p, k, m;
    cin >> p;

    while (p--) {
        cin >> k >> m;
        cout << k << " " << m << " " << (isHappy(m) && isPrime(m) ? "YES" : "NO" ) << endl;
    }

    return 0;
}
