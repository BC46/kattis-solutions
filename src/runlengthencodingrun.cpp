#include <iostream>

using namespace std;

int main()
{
    char op;
    string message;

    cin >> op >> message;

    if (op == 'D') {
        for (int i = 0; i < message.size() - 1; i += 2)
            cout << string(message[i + 1] - '0', message[i]);

        return 0;
    }

    int repeatAmount = 1;
    char prev = message[0];
    cout << prev;

    for (int i = 1; i < message.size(); ++i) {
        if (message[i] == prev) {
            ++repeatAmount;
        } else {
            cout << repeatAmount << message[i];

            repeatAmount = 1;
            prev = message[i];
        }
    }

    cout << repeatAmount << '\n';

    return 0;
}
