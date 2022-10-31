#include <iostream>

int main()
{
    int c, n, g;
    std::cin >> c;

    while (c--) {
        std::cin >> n;

        int total = 0;
        int grades[n];

        for (int i = 0; i < n; ++i) {
            std::cin >> g;

            total += g;
            grades[i] = g;
        }

        double avg = static_cast<double>(total) / static_cast<double>(n);
        int amountAboveAvg = 0;

        for (int i = 0; i < n; ++i) {
            if (grades[i] > avg)
                ++amountAboveAvg;
        }

        printf("%.3f%%\n", static_cast<double>(amountAboveAvg) / static_cast<double>(n) * 100.0);
    }

    return 0;
}
