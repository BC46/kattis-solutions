#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n, m, mInput, closestDiff = INT_MAX, diff, sum, closestSum, c = 1;

    while (cin >> n) {
        vector<int> nums(n);

        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        cin >> m;
        cout << "Case " << c++ << ":" << endl;

        for (int i = 0; i < m; ++i) {
            cin >> mInput;

            for (int x = 0; x < n - 1; ++x) {
                for (int y = x + 1; y < n; ++y) {
                    sum = nums[x] + nums[y];
                    diff = abs(sum - mInput);

                    if (diff < closestDiff) {
                        closestDiff = diff;
                        closestSum = sum;
                    }
                }
            }

            cout << "Closest sum to " << mInput << " is " << closestSum << "." << endl;
            closestDiff = INT_MAX;
        }
    }

    return 0;
}
