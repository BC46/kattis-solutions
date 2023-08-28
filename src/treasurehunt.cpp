#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int r, c, cX = 0, cY = 0, moves = 0;
    cin >> r >> c;

    int maxMoves = r * c;

    string result;
    char map[r][c];

    for (int y = 0; y < r; ++y) {
        for (int x = 0; x < c; ++x)
            cin >> map[y][x];
    }

    while (map[cY][cX] != 'T') {
        switch (map[cY][cX]) {
            case 'N':
                --cY;
                break;
            case 'S':
                ++cY;
                break;
            case 'W':
                --cX;
                break;
            case 'E':
                ++cX;
                break;
        }

        if (cY < 0 || cY >= r || cX< 0 || cX >= c) {
            result = "Out";
            break;
        }

        if (moves > maxMoves) {
            result = "Lost";
            break;
        }

        ++moves;
    }

    cout << (result.empty() ? to_string(moves) : result) << '\n';

    return 0;
}
