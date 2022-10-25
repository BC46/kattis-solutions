#include <iostream>

int main()
{
    int n, k, x;
    std::cin >> n >> k;

    for (int i(1); i <= n; ++i) {
        std::cin >> x;

        if (i % k == 0)
            std::cout << x << " ";
    }

    std::cout << std::endl;
    return 0;
}
