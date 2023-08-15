#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string message;
    int n;

    while (cin >> n && n > 0) {
        string result;
        vector<int> perms(n);

        for (auto &perm : perms)
            cin >> perm;

        cin.ignore();
        getline(cin, message);

        for (size_t i = 0; i < message.length(); i += perms.size()) {
            for (const auto &perm : perms) {
                size_t charIndex = i + perm - 1;

                result += (charIndex < message.length() ? message[charIndex] : ' ');
            }
        }

        cout << '\'' << result << "\'\n";
    }

    return 0;
}
