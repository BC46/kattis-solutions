#include <iostream>

int main()
{
    int below_zero_count = 0;

    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        int t;
        std::cin >> t;

        if (t < 0) ++below_zero_count;
    }

    std::cout << below_zero_count << std::endl;
    return 0;
}
