#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, lph, total = 0;
    cin >> n >> lph;

    vector<int> problems(n);

    for (auto &p : problems)
        cin >> p;

    sort(problems.begin(), problems.end());

    lph *= 5;

    for (auto &p : problems) {
        if ((lph -= p) < 0)
            break;

        ++total;
    }

    cout << total << '\n';

    return 0;
}
