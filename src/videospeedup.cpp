#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double p, k, result;
    int n, ti;

    cin >> n >> p >> k;
    result = k;

    p = p / 100 + 1;

    while (n--) {
        cin >> ti;

        result += (k - ti) * p - (k - ti);
    }

    std::cout << setprecision(20) << result << std::endl;
    return 0;
}
