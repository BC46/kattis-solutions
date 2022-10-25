#include <iostream>

int main()
{
    double scale;
    double bought[3];
    double ratios[3];

    std::cin >> bought[0] >> bought[1] >> bought[2]
             >> ratios[0] >> ratios[1] >> ratios[2];

    double lowestScale(bought[0] / ratios[0]), leftover;
    for (int i(1); i < 3; ++i) {
        scale = bought[i] / ratios[i];

        if (scale < lowestScale)
            lowestScale = scale;
    }

    for (int i(0); i < 3; ++i) {
        leftover = ratios[i] * lowestScale;
        std::cout << bought[i] - leftover << " ";
    }

    std::cout << std::endl;
    return 0;
}
