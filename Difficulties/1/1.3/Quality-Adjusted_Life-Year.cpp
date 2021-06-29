#include <iostream>

int main()
{
    float sum = 0;

    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        float q, y;
        std::cin >> q >> y;

        sum += q * y;
    }

    std::cout << sum;
    return 0;
}
