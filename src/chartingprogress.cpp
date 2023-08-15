#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int size = 0, current;
    string line;

    while (getline(cin, line)) {
        if (line.empty()) {
            size = 0;
            cout << '\n';
            continue;
        }

        unsigned int count = 0;

        if (!size)
            size = current = line.length();

        for (const auto &c : line) {
            if (c == '*')
                ++count;
        }

        cout << string(current - count, '.') << string(count, '*') << string(size - current, '.') << '\n';

        current -= count;
    }

    return 0;
}
