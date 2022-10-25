#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i(0); i < n; ++i) {
        std::string line1, line2;
        std::cin >> line1 >> line2;

        std::cout << line1 << std::endl << line2 << std::endl;

        for (int j(0); j < line1.length(); ++j) {
            std::cout << (line1[j] == line2[j] ? '.' : '*');
        }

        std::cout << std::endl << std::endl;
    }

    return 0;
}
