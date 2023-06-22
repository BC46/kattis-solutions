#include <iostream>
#include <stack>

using namespace std;

bool isClosingBracket(const char &c) {
    return c == ')' || c == ']' || c == '}';
}

bool openingCorrespondsToClosing(const char &o, const char &c) {
    return (o == '(' && c == ')') || (o == '[' && c == ']') || (o == '{' && c == '}');
}

int main()
{
    bool bad{};

    int length;
    string l;
    stack<char> h;

    cin >> length;
    cin.ignore();

    getline(cin, l);

    for (int i = 0; i < length; ++i) {
        if (l[i] == ' ')
            continue;

        if (!isClosingBracket(l[i])) {
            h.push(l[i]);
            continue;
        }

        if (!h.empty() && openingCorrespondsToClosing(h.top(), l[i]))
            h.pop();
        else {
            cout << l[i] << ' ' << i << '\n';
            bad = true;

            break;
        }
    }

    if (!bad)
        cout << "ok so far\n";

    return 0;
}
