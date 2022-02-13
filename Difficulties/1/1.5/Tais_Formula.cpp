#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;

    double pti(0), pvi(0), ta(0);
    std::cin >> pti >> pvi;
    --n;

    while (n--) {
        double ti, vi;
        std::cin >> ti >> vi;

        ta += ((pvi + vi) / 2) * (ti - pti);

        pti = ti;
        pvi = vi;
    }

    std::cout << std::setprecision(10) << ta / 1000 << std::endl;
    return 0;
}
