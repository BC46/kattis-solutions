#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for (size_t i = 0; i < t; i++) {
        int lowest = INT_MAX;
        int highest = INT_MIN;
        int n;
        std::cin >> n;

        for (size_t i = 0; i < n; i++) {
            int x;
            std::cin >> x;

            if (x < lowest) {
                lowest = x;
            }

            if (x > highest) {
                highest = x;
            }
        }

        std::cout << (highest - lowest) * 2 << std::endl;
    }

    return 0;
}
