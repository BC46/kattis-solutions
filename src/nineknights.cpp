#include <iostream>
#include <vector>

using namespace std;

bool board[5][5];
vector<pair<int, int>> knightMoves {
    { -2, -1 }, { -1, -2},
    { 2, -1 }, { 1, -2},
    { -2, 1 }, { -1, 2},
    { 2, 1 }, { 1, 2}
};

bool collision(const pair<int, int> &knightPos) {
    for (const auto &kM : knightMoves) {
        int x = knightPos.first + kM.first;
        int y = knightPos.second + kM.second;

        if (x >= 5 || y >= 5 || x < 0 || y < 0)
            continue;

        if (board[y][x])
            return true;
    }

    return false;
}

int main()
{
    vector<pair<int, int>> knights;
    char input;

    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 5; ++x) {
            cin >> input;

            if (input == 'k') {
                board[y][x] = true;
                knights.emplace_back(x, y);
            }
        }
    }

    for (const auto &k : knights) {
        if (collision(k)) {
            cout << "invalid\n";
            return 0;
        }
    }

    cout << (knights.size() == 9 ? "" : "in") << "valid\n";
    return 0;
}
