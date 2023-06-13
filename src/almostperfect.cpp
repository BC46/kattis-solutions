#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string input;
    int n;

    while (getline(cin, input)) {
        n = stol(input, nullptr);

        int nSqrt = sqrt(n), sum = 1;

        if (n == 2)
            sum = 3;

        for (int i = 2; i <= nSqrt; ++i) {
            if (n % i == 0) {
                sum += i;

                if (i != n / i)
                    sum += n / i;
            }
        }

        cout << n << (sum == n ? " perfect" : (abs(sum - n)) > 2 ? " not perfect" : " almost perfect") << '\n';
    }

    return 0;
}
