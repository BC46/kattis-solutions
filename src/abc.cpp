#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums(3);
    int out;
    std::string output;
    std::cin >> nums[0] >> nums[1] >> nums[2] >> output;

    std::sort(nums.begin(), nums.end());

    for (const auto & c : output) {
        if (c == 'A') out = nums[0];
        if (c == 'B') out = nums[1];
        if (c == 'C') out = nums[2];

        std::cout << out << " ";
    }

    return 0;
}
