#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    set<int> incs;
    int nums[3], result;

    for (auto &num : nums)
        cin >> num;

    sort(nums, nums + 3);

    for (int i = 1; i < 3; ++i)
        incs.emplace(nums[i] - nums[i - 1]);

    if (incs.size() == 1)
        result = nums[2] + *incs.begin();
    else {
        for (int i = 1; i < 3; ++i) {
            if (nums[i] - nums[i - 1] == *incs.begin() * 2)
                result = nums[i - 1] + *incs.begin();
        }
    }

    cout << result << endl;
    return 0;
}
