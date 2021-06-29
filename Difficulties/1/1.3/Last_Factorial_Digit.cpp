#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for (size_t i = 0; i < t; i++) {
        int n;
        int factorial = 1;
        std::cin >> n;

        for (size_t j = 1; j <= n; j++) {
            factorial *= j;
        }

        std::cout << std::to_string(factorial).back() << std::endl;
    }

    return 0;
}
