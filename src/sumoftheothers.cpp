#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int input;
    string line;

    while (getline(cin, line)) {
        vector<int> nums;
        istringstream iss(line);

        while (iss >> input)
            nums.emplace_back(input);

        for (int i = 0; i < nums.size(); ++i) {
            int sum = 0;

            for (int j = 0; j < nums.size(); ++j) {
                if (i != j)
                    sum += nums[j];
            }

            if (sum == nums[i]) {
                cout << sum << '\n';
                break;
            }
        }
    }

    return 0;
}
