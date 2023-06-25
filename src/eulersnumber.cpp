#include <iostream>
#include <iomanip>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    if (n > 60)
        n = 60;

    if (n > 0) {
        for (int i = 1; i <= n; ++i)
            result *= i;
    }

    return result;
}

int main()
{
    long double result = 0;

    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i)
        result += 1.0L / (long double) factorial(i);

    cout << setprecision(20) << result << '\n';
    return 0;
}
