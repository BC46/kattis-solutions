#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> yarnTable {
        { '.', 20 },
        { 'O', 10 },
        { '\\', 25 },
        { '/', 25 },
        { 'A', 35 },
        { '^', 5 },
        { 'v', 22 },
    };

    string line;
    int n, m, yarn = 0;

    cin >> n >> m;

    while (n--) {
        cin >> line;

        for (auto &c : line)
            yarn += yarnTable[c];
    }

    cout << yarn;

    return 0;
}
