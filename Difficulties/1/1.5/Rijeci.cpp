#include <iostream>

int main()
{
    int k, aCount(1), bCount(0), temp;
    std::cin >> k;

    for (int i(1); i <= k; ++i) {
        temp = aCount;

        aCount = bCount;
        bCount += temp;
    }

    std::cout << aCount << " " << bCount << std::endl;
    return 0;
}
