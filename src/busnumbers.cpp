#include <iostream>
#include <algorithm>
#include <vector>

struct BusHistory {
    int first;
    int last;
    int len;
};

void printHistory(BusHistory & history, int num) {
    if (history.len > 2)
        std::cout << history.first << "-" << history.last << " ";
    else if (history.len == 2)
        std::cout << history.first << " " << history.last << " ";
    else
        std::cout << std::to_string(history.first) + " ";

    history.first = num;
    history.last = num;
    history.len = 1;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        std::cin >> nums[i];

    std::sort(nums.begin(), nums.end());

    BusHistory history = { nums[0], nums[0], 1 };
    for (int i = 1; i < n; ++i) {
        if (nums[i] == history.last + 1) {
            history.last++;
            history.len++;
        } else
            printHistory(history, nums[i]);
    }

    printHistory(history, history.first);

    return 0;
}
