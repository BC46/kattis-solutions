#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums(50);
    int t, n, max = 0;
    std::cin >> t >> n;

    for (int i = 0; i < t; ++i)
        std::cin >> nums[i];

    for (int i = 0; i < t; ++i) {
        if (n >= nums[i]) {
            n -= nums[i];
            ++max;
        } else
            break;
    }

    std::cout << max << std::endl;
    return 0;
}
