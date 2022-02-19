#include <iostream>
#include <vector>
#include <algorithm>

int GetCorresponding(int number, const std::vector<int> &l1, const std::vector<int> &l2) {
    // TODO: Binary search
    for (int i(0); i < l1.size(); ++i) {
        if (number == l1[i])
            return l2[i];
    }

    return 0;
}

int main()
{
    int amount;
    std::cin >> amount;

    while (amount > 0) {
        std::vector<int> l1(amount);
        std::vector<int> l2(amount);

        for (int i(0); i < amount; ++i)
            std::cin >> l1[i];

        for (int i(0); i < amount; ++i)
            std::cin >> l2[i];

        std::vector<int> l1Sorted(l1);
        std::vector<int> l2Sorted(l2);

        std::sort(l1Sorted.begin(), l1Sorted.end());
        std::sort(l2Sorted.begin(), l2Sorted.end());

        for (int i : l1) {
            std::cout << GetCorresponding(i, l1Sorted, l2Sorted) << std::endl;
        }

        std::cout << std::endl;
        std::cin >> amount;
    }

    return 0;
}
