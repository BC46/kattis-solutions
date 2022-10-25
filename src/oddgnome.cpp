#include <iostream>

int main()
{
    int n, ng, g, lg;
    std::cin >> n;

    while (n--) {
        std::cin >> ng;

        std::cin >> lg;

        bool found {};

        for (int i(2); i < ng; ++i) {
            std::cin >> g;

            if (found)
                continue;

            if (g != lg + 1) {
                found = true;
                std::cout << i << std::endl;
            }

            lg = g;
        }

        std::cin >> lg;
    }

    return 0;
}
