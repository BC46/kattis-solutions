#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, wrong = 0;
    cin >> n;

    int oldList[n], newList[n];

    for (int i = 0; i < n; ++i) {
        cin >> oldList[i];
        newList[i] = oldList[i];
    }

    sort(oldList, oldList + n);

    for (int i = 0; i < n; ++i) {
        if (oldList[i] != newList[i])
            ++wrong;
    }

    cout << wrong << '\n';
    return 0;
}
