#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, numInput, prev, absDiff;

    while (cin >> n) {
        bool nums[--n];
        fill_n(nums, n, false);

        cin >> prev;

        for (int i = 0; i < n; ++i) {
            cin >> numInput;

            absDiff = abs(numInput - prev);

            if (absDiff > 0 && absDiff <= n)
                nums[absDiff - 1] = true;

            prev = numInput;
        }

        bool jolly = all_of(nums, nums + n, [](const bool &num) { return num; });

        cout << (jolly ? "J" : "Not j") << "olly\n";
    }

    return 0;
}
