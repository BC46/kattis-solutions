#include <iostream>
#include <cmath>

int main()
{
    int n, x, y, a;
    std::cin >> n >> x >> y;
    double s(static_cast<double>(y) / static_cast<double>(x));

    while (n--) {
        std::cin >> a;

        std::cout << static_cast<int>(std::round(s * a)) << std::endl;
    }

    return 0;
}
