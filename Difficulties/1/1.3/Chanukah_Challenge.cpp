#include <iostream>

int main()
{
    int p;
    std::cin >> p;

    for (size_t i = 0; i < p; i++) {
        int k, n;
        std::cin >> k >> n;

        int candles = 0;

        for (size_t j = 1; j <= n; j++) {
            candles += j + 1;
        }

        std::cout << k << " " << candles << std::endl;
    }

    return 0;
}
