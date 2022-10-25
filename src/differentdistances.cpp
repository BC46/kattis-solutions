#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double x1, y1, x2, y2, p;

    while (true) {
        std::cin >> x1;
        if (x1 == 0)
            break;

        std::cin >> y1 >> x2 >> y2 >> p;

        std::cout << std::setprecision(12)
        << pow(pow(std::abs(x1 - x2), p) + pow(std::abs(y1 - y2), p), 1.0f / p) << std::endl;
    }

    return 0;
}
