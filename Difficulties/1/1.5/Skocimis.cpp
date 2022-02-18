#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> k(3);
    std::cin >> k[0] >> k[1] >> k[2];

    int total(0);

    while (k[0] < k[1] - 1 || k[1] + 1 < k[2]) {
        int spaceLeft(k[1] - k[0]);
        int spaceRight(k[2] - k[1]);

        if (spaceLeft >= 2 && spaceLeft >= spaceRight) {
            k[2] = k[0] + 1;
        } else if (spaceRight >= 2 && spaceRight > spaceLeft) {
            k[0] = k[1] + 1;
        }

        ++total;
        std::sort(k.begin(), k.end());
    }

    std::cout << total << std::endl;
    return 0;
}
