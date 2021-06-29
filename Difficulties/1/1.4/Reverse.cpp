#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int numbers [n];

    for (size_t i = 0; i < n; i++) {
        int number;
        std::cin >> number;

        numbers[i] = number;
    }

    for (int i = n - 1; i >= 0; i--) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}
