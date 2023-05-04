#include <iostream>

using namespace std;

void ordinal(string &s, int n) {
    s += '{';

    for (int i = 0; i < n; ++i) {
        ordinal(s, i);

        if (i < n - 1)
            s += ',';
    }

    s += '}';
}

int main()
{
    string s;
    int n;

    cin >> n;

    ordinal(s, n);
    cout << s << '\n';

    return 0;
}
