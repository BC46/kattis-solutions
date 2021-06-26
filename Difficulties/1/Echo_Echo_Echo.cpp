#include <iostream>

int main()
{
    std::string line;
    std::cin >> line;

    for (size_t i = 0; i < 3; i++) {
        std::cout << line << " ";
    }

    return 0;
}
