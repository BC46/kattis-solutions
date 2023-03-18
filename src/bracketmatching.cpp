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
    int n;
    string s, result = "Valid";
    stack<char> h;

    cin >> n >> s;

    for (const auto &c : s) {
        if (h.empty()) {
            if (isClosingBracket(c)) {
                result = "Invalid";
                break;
            }

            h.push(c);
        } else if (isClosingBracket(h.top())) {
            if (isClosingBracket(c)) {
                result = "Invalid";
                break;
            } else {
                h.push(c);
            }
        } else {
            if (openingCorrespondsToClosing(h.top(), c))
                h.pop();
            else
                h.push(c);
        }
    }

    if (!h.empty())
        result = "Invalid";

    cout << result << endl;
    return 0;
}
