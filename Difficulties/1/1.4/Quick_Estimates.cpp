#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        std::string cost;
        std::cin >> cost;

        std::cout << cost.length() << std::endl;
    }

    return 0;
}
