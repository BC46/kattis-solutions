#include <iostream>
#include <vector>

using namespace std;

struct Attribute {
    int index;
    char value;
};

int main()
{
    int n, m, q, matches = 0, lastMatch;
    cin >> n >> m >> q;

    vector<vector<char>> characters(n);

    for (int i = 0; i < n; ++i) {
        characters[i].resize(m);

        for (int j = 0; j < m; ++j)
            cin >> characters[i][j];
    }

    vector<Attribute> attributes(q);

    for (auto &attr : attributes)
        cin >> attr.index >> attr.value;

    for (int i = 0; i < characters.size(); ++i) {
        bool match = true;

        for (auto &attr : attributes) {
            if (characters[i][attr.index - 1] != attr.value) {
                match = false;
                break;
            }
        }

        if (match) {
            ++matches;
            lastMatch = i + 1;
        }
    }

    if (matches == 1)
        cout << "unique" << '\n' << lastMatch << '\n';
    else
        cout << "ambiguous" << '\n' << matches << '\n';

    return 0;
}
