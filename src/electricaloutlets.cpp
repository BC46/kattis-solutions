#include <string.h>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int outlet_amounts [n];
    std::fill_n(outlet_amounts, n, 1);

    for (size_t i = 0; i < n; i++) {
        int k;
        std::cin >> k;

        for (size_t j = 0; j < k; j++) {
            int o;
            std::cin >> o;

            outlet_amounts[i] += o - 1;
        }
    }

    for (int outlet : outlet_amounts)
        std::cout << outlet << std::endl;

    return 0;
}
