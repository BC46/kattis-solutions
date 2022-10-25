#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    for (int testCase(0); testCase < n; ++testCase) {
        std::string message;
        std::cin >> message;

        int sideSize(sqrt(message.length()));
        char table[sideSize][sideSize];

        int x(0);
        int y(sideSize - 1);

        for (const char &letter : message) {
            table[y--][x] = letter;

            if (y < 0) {
                y = sideSize - 1;
                ++x;
            }
        }

        for (int i(0); i < sideSize; ++i) {
            for (int j(0); j < sideSize; ++j) {
                std::cout << table[i][j];
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
