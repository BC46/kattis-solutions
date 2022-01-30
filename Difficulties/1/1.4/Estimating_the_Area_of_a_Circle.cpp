#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    while (true) {
        float r, m, c;
        std::cin >> r >> m >> c;

        if (r == 0 && m == 0 && c == 0) {
            break;
        }

        float estimate(std::pow((r * 2), 2) * (c / m));

        std::cout << std::fixed;
        std::cout << std::setprecision(5);
        std::cout << (r * r * M_PI) << " " << estimate << std::endl;
    }

    return 0;
}
