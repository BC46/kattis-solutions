#include <iostream>

using namespace std;

struct P {
    string name;
    char m;
};

int main()
{
    P players[] = { { "Jebb", 'O' }, { "Neibb", 'X' } };

    char board[3][3];

    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x)
            cin >> board[y][x];
    }

    bool won{};

    for (auto &p : players) {
        for (int y = 0; y < 3; ++y) {
            if (board[y][0] == board[y][1] && board[y][1] == board[y][2] && board[y][2] == p.m) {
                won = true;
                break;
            }
        }

        for (int x = 0; x < 3; ++x) {
            if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[2][x] == p.m) {
                won = true;
                break;
            }
        }

        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == p.m)
            || (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == p.m)) {
            won = true;
        }

        if (won) {
            cout << p.name;
            break;
        }
    }

    if (!won)
        cout << players[1].name;

    return 0;
}
