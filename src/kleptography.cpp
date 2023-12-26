#include <iostream>

using namespace std;

int toInt(char c) {
    return c - 'a';
}

char toChar(int i) {
    return (char) (i + 'a');
}

int main()
{
    int n, m;
    string key, cipher, plain;

    cin >> n >> m >> plain >> cipher;

    key.insert(0, string(m, '.'));
    plain.insert(0, string(m - n, '.'));

    for (int i = m - 1; i >= n; --i) {
        int sub = toInt(cipher[i]) - toInt(plain[i]) % 26;

        if (sub < 0)
            sub = 26 + sub;

        key[i] = plain[i - n] = toChar(sub);
    }

    cout << plain;

    return 0;
}
