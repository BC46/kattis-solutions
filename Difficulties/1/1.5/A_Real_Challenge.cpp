#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double a, length;
    std::cin >> a;
    length = sqrt(a) * 4;

    std::cout << std::setprecision(20) << length << std::endl;
    return 0;
}
