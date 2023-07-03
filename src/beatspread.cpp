#include <iostream>

using namespace std;

int main()
{
    int n, s, d, s1, s2;

    cin >> n;

    while (n--) {
        cin >> s >> d;

        s1 = (s - d) / 2;
        s2 = d + (s - d) / 2;

        if (s1 + s2 == s && s1 >= 0 && s2 >= 0)
            cout << max(s1, s2) << ' ' << min(s1, s2) << '\n';
        else
            cout << "impossible\n";
    }

    return 0;
}
