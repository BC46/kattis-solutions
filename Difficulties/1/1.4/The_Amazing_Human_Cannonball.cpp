#include <iostream>
#include <math.h>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        float v, angle, x1, h1, h2;
        std::cin >> v >> angle >> x1 >> h1 >> h2;

        float radian = angle / 180 * M_PI;
        float t = x1 / (cos(radian) * v);
        float y = v * t * sin(radian) - 0.5 * 9.81 * pow(t, 2);

        std::cout << (y >= h1 + 1 && y <= h2 - 1 ? "Safe" : "Not Safe") << std::endl;
    }

    return 0;
}
