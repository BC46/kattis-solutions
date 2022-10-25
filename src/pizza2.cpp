#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int r, c;
    std::cin >> r >> c;

    double p((((r - c) * (r - c)) * M_PI) / ((r * r) * M_PI) * 100);

    std::cout << std::setprecision(10) << p << std::endl;
    return 0;
}
