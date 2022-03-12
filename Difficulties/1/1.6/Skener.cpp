#include <iostream>

int main()
{
    std::string line;
    int r, c, zr, zc;
    std::cin >> r >> c >> zr >> zc;

    while (r--) {
        std::cin >> line;

        for (int j(0); j < zr; ++j) {
            for (const auto &character : line)
                std::cout << std::string(zc, character);

            std::cout << std::endl;
        }
    }

    return 0;
}
