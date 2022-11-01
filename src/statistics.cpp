#include <iostream>

int main()
{
    int n, num, caseNum = 1;

    while (std::cin >> n) {
        int max = -1000000, min = 1000000, range;

        while (n--) {
            std::cin >> num;

            if (num < min)
                min = num;
            if (num > max)
                max = num;
        }

        range = max - min;

        std::cout << "Case " + std::to_string(caseNum++) + ": ";
        std::cout << std::to_string(min) + " " + std::to_string(max) + " " + std::to_string(range) + "\n";
    }

    return 0;
}
