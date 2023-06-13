#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string pattern, text;

    while (getline(cin, pattern) && getline(cin, text)) {
        size_t pos = -1;

        while (true) {
            pos = text.find(pattern, pos + 1);

            if (pos == string::npos)
                break;

            cout << pos << ' ';
        }

        cout << endl;
    }

    return 0;
}
