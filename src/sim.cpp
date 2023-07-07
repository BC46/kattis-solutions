#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    int t;

    cin >> t;
    cin.ignore();

    while (t--) {
        int frontIndex = 0;
        bool back = true;
        list<char> result;

        getline(cin, line);

        for (const auto &c : line) {
            if (c == '<') {
                if (result.empty())
                    continue;

                if (!back && frontIndex > 0) {
                    auto it = result.begin();
                    advance(it, --frontIndex);

                    result.erase(it);
                } else if (back) {
                    result.pop_back();
                }
            } else if (c == '[') {
                back = false;
                frontIndex = 0;
            } else if (c == ']') {
                back = true;
            } else if (back) {
                result.emplace_back(c);
            } else {
                if (frontIndex == 0) {
                    result.emplace_front(c);
                    ++frontIndex;
                } else {
                    auto it = result.begin();
                    advance(it, frontIndex++);

                    result.insert(it, c);
                }
            }
        }

        for (const auto &c : result)
            cout << c;

        cout << '\n';
    }

    return 0;
}
