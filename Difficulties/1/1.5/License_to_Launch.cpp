#include <iostream>
#include <vector>

int main()
{
    std::vector<int> junkAmounts;
    int n, junkAmount, lowest(100001), lowestIndex(-1);
    std::cin >> n;

    while (n--) {
        std::cin >> junkAmount;
        junkAmounts.push_back(junkAmount);
    }

    for (int i(0); i < junkAmounts.size(); ++i) {
        if (junkAmounts[i] < lowest) {
            lowest = junkAmounts[i];
            lowestIndex = i;
        }
    }

    std::cout << lowestIndex << std::endl;
    return 0;
}
