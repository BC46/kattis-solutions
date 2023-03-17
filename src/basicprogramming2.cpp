#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool hasQuadSevenSum(const vector<int> &a, int n) {
    set<int> nums;

    for (const auto &num : a)
        nums.insert(num);

    for (const auto &num : nums) {
        auto it = nums.find(7777 - num);

        if (it != nums.end())
            return true;
    }

    return false;
}

int main()
{
    int n, t;

    cin >> n >> t;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    if (t == 1) {
        cout << (hasQuadSevenSum(a, n) ? "Yes" : "No") << endl;
    } else if (t == 2) {
        set<int> nums;

        for (const auto &num : a)
            nums.insert(num);

        cout << (nums.size() == n ? "Unique" : "Contains duplicate") << endl;
    } else if (t == 3) {
        unordered_map<int, int> occurrences{};
        int foundNum;
        bool found{};

        for (const auto &num : a) {
            auto it = occurrences.find(num);

            if (it == occurrences.end())
                occurrences.insert({ num, 1 });
            else
                it->second++;
        }

        for (const auto &pair : occurrences) {
            if (pair.second > n / 2) {
                foundNum = pair.first;
                found = true;
                break;
            }
        }

        cout << (found ? foundNum : -1) << endl;

    } else if (t == 4) {
        sort(a.begin(), a.end());

        if (n % 2 == 0) {
            cout << a[(n / 2) - 1] << " " << a[n / 2] << endl;
        } else {
            cout << a[n / 2] << endl;
        }
    } else if (t == 5) {
        vector<int> rangedInts(n);
        int c = 0;

        for (const auto &num : a) {
            if (num >= 100 && num <= 999)
                rangedInts[c++] = num;
        }

        sort(rangedInts.begin(), rangedInts.begin() + c);

        for (int i = 0; i < c; ++i)
            cout << rangedInts[i] << " ";

        cout << endl;
    }

    return 0;
}
