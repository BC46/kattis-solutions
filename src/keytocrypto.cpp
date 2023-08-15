#include <iostream>

using namespace std;

int main()
{
    string ciphertext, key, result;
    cin >> ciphertext >> key;

    for (int i = 0; i < ciphertext.length(); ++i) {
        int messageIdx = (ciphertext[i] - 'A') - (key[i] - 'A');

        if (messageIdx < 0)
            messageIdx = 26 - abs(messageIdx);

        char messageChar = (char) (messageIdx + 'A');

        result += messageChar;

        if (key.length() < ciphertext.length())
            key += messageChar;
    }

    cout << result << '\n';

    return 0;
}
