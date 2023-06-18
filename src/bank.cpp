#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, t, ci = 0, ti = 0, total = 0;
    cin >> n >> t;

    vector<int> people(t + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> ci >> ti;

        for (int j = ti; j >= 0; --j) {
            if (ci > people[j]) {
                total -= people[j] - ci;

                swap(people[j], ci);
            }
        }
    }

    cout << total << endl;
    return 0;
}
