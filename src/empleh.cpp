#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

template <typename board>
void processPieceInputs(string &input, const string &header, board& b, bool isWhite){
    int x, y;
    char piece;
    string entry;

    if (input == header)
        return;

    input = input.substr(header.length());
    istringstream iss(input);

    while (iss.good()) {
        getline(iss, entry, ',');

        if (entry.length() == 2) {
            piece = 'P';
            x = entry[0] - 96;
            y = entry[1] - '0';
        } else {
            piece = entry[0];
            x = entry[1] - 96;
            y = entry[2] - '0';
        }

        if (!isWhite)
            piece = tolower(piece);

        b[y - 1][x - 1] = piece;
    }
}

int main()
{
    int rowNum = 8;
    char field, piece;

    char board[8][8];
    memset(&board, 0x0, sizeof(board));

    string wInput, bInput, entry;
    getline(cin, wInput);
    getline(cin, bInput);

    processPieceInputs(wInput, "White: ", board, true);
    processPieceInputs(bInput, "Black: ", board, false);

    for (int i = 1; i <= 17; ++i) {
        if (i % 2 > 0) {
            cout << "+---+---+---+---+---+---+---+---+\n";
            continue;
        }

        cout << '|';

        for (int j = 1; j <= 8; ++j) {
            if (rowNum % 2 == 0)
                field = j % 2 != 0 ? '.' : ':';
            else
                field = j % 2 == 0 ? '.' : ':';

            piece = board[rowNum - 1][j - 1];

            cout << field << (piece == 0x0 ? field : piece) << field << '|';
        }

        cout << '\n';
        --rowNum;
    }

    return 0;
}
