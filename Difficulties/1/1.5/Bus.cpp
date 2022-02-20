#include <iostream>

int main()
{
    int t, k;
    std::cin >> t;

    while (t--) {
        double n(0);
        std::cin >> k;

        while (k--) {
            n = static_cast<double>(n + 0.5f) * 2.0f;
        }

        std::cout << (long) n << std::endl;
    }

    return 0;
}
