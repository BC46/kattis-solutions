#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int kari[4], ola[4];
    std::cin >> kari[0] >> kari[1] >> ola[0] >> ola[1]
             >> kari[2] >> kari[3] >> ola[2] >> ola[3];

    double  startDiff(std::pow(std::abs(ola[0] - kari[0]), 2) + std::pow(std::abs(ola[1] - kari[1]), 2)),
            endDiff(std::pow(std::abs(ola[2] - kari[2]), 2) + std::pow(std::abs(ola[3] - kari[3]), 2));

    double largestDist(startDiff > endDiff ? sqrt(startDiff) : sqrt(endDiff));

    std::cout << std::setprecision(20) << largestDist << std::endl;
    return 0;
}
