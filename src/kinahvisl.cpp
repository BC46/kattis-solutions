#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n = 1;

    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i])
            ++n;
    }

    cout << n << '\n';

    return 0;
}
