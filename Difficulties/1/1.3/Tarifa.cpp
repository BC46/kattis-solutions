#include <iostream>

int main()
{
    int x, n;
    int mb = 0;
    std::cin >> x >> n;

    for (size_t i = 0; i < n; i++) {
        int p;
        std::cin >> p;

        mb += x - p;
    }

    std::cout << mb + x;
    return 0;
}
