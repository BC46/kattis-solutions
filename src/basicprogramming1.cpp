#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n, t;

    cin >> n >> t;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    if (t == 1) {
        cout << "7" << endl;
    } else if (t == 2) {
        string result("Smaller");

        if (a[0] > a[1])
            result = "Bigger";
        else if (a[0] == a[1])
            result = "Equal";

        cout << result << endl;
    } else if (t == 3) {
        sort(a.begin(), a.begin() + 3);

        cout << a[1] << endl;
    } else if (t == 4) {
        long long total = 0;

        for (const auto &num : a)
            total += num;

        cout << total << endl;
    } else if (t == 5) {
        long long total = 0;

        for (const auto &num : a)
        {
            if (num % 2 == 0)
                total += num;
        }

        cout << total << endl;
    } else if (t == 6) {
        string result;

        for (const auto &num : a)
            result += (char) ((num % 26) + 'a');

        cout << result << endl;
    } else if (t == 7) {
        int i = 0;

        multiset<int, greater<>> indexHistory;
        indexHistory.insert(0);

        while (i < n - 1) {
            i = a[i];

            auto it = indexHistory.find(i);

            if (it != indexHistory.end()) {
                cout << "Cyclic" << endl;
                return 0;
            }

            indexHistory.insert(i);
        }

        if (i == n - 1)
            cout << "Done" << endl;
        else
            cout << "Out" << endl;
    }

    return 0;
}
