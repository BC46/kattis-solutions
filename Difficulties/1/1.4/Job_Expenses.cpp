#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int e = 0;

    for (size_t i = 0; i < n; i++) {
        int k;
        std::cin >> k;

        if (k < 0) {
            e += abs(k);
        }
    }

    std::cout << e << std::endl;
    return 0;
}
