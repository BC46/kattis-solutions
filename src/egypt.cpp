#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l[3];
    int calcC;

    while (true) {
        cin >> l[0] >> l[1] >> l[2];

        if (l[0] == 0 && l[1] == 0 && l[2] == 0)
            break;

        sort(l, l + 3);

        calcC = l[0] * l[0] + l[1] * l[1];

        cout << (l[2] * l[2] == calcC ? "right" : "wrong") << endl;
    }

    return 0;
}
