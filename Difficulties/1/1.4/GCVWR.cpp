#include <iostream>

int main()
{
    int g, t, i, max, item;
    std::cin >> g >> t >> i;

    max = (g - t) * 0.9;

    while (i--) {
        std::cin >> item;
        max -= item;
    }

    std::cout << max << std::endl;
    return 0;
}
