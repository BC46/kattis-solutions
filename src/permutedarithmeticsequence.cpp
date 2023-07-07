#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isArithmetic( const vector<int> &nums ) {
    int diff = abs( nums[0] - nums[1] );

    for (int i = 2; i < nums.size(); ++i) {
        if (abs( nums[i] - nums[i - 1] ) != diff)
            return false;
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n;

    while (n--) {
        cin >> m;

        vector<int> nums( m );

        for (int &num : nums)
            cin >> num;

        if (isArithmetic( nums )) {
            cout << "arithmetic\n";
        } else {
            sort( nums.begin(), nums.end() );

            cout << (isArithmetic( nums ) ? "permuted arithmetic" : "non-arithmetic") << "\n";
        }
    }

    return 0;
}
