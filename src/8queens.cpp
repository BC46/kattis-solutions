#include <iostream>
#include <vector>

using namespace std;

bool board[8][8];

bool collision(int x, int y, int xInc, int yInc) {
    while (true) {
        x += xInc;
        y += yInc;

        if (x >= 8 || y >= 8 || x < 0 || y < 0)
            return false;

        if (board[y][x])
            return true;
    }
}

int main()
{
    vector<pair<int, int>> queens;
    int dirs[] = { -1, 0, 1 };
    char input;

    for (int y = 0; y < 8; ++y) {
        for (int x = 0; x < 8; ++x) {
            cin >> input;

            if (input == '*') {
                board[y][x] = true;
                queens.emplace_back(x, y);
            }
        }
    }

    for (const auto &q : queens) {
        for (const auto &xDir : dirs) {
            for (const auto &yDir : dirs) {
                if ((xDir != 0 || yDir != 0) && collision(q.first, q.second, xDir, yDir)) {
                    cout << "invalid\n";
                    return 0;
                }
            }
        }
    }

    cout << (queens.size() != 8 ? "in" : "") << "valid\n";
    return 0;
}
