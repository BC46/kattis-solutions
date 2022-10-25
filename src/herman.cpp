#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double r;
    std::cin >> r;

    double e(r * r * M_PI), t((r * r) * 2);
    std::cout << std::setprecision(20) << e << std::endl << t << std::endl;

    return 0;
}
