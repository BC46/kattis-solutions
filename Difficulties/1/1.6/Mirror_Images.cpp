#include <iostream>
#include <vector>

int main()
{
    std::string line;
    int t, r, c;
    std::cin >> t;

    for (int i(1); i <= t; ++i) {
        std::vector<std::string> lines;
        std::cin >> r >> c;

        while (r--) {
            std::cin >> line;
            lines.push_back(line);
        }

        std::cout << "Test " << i << std::endl;

        for (int j(static_cast<int>(lines.size() - 1)); j >= 0; --j) {
            for (int k(static_cast<int>(lines[j].length() - 1)); k >= 0; k--)
                std::cout << lines[j][k];

            std::cout << std::endl;
        }
    }

    return 0;
}
