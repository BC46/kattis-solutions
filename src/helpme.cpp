#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Piece {
    string info;
    int rank{0};

    Piece (string info, char type, int rowNumber, int colNumber)
        : info(std::move(info))
    {
        if (type == 'K')
            rank += 500;
        else if (type == 'Q')
            rank += 400;
        else if (type == 'R')
            rank += 300;
        else if (type == 'B')
            rank += 200;
        else if (type == 'N')
            rank += 100;

        rank += rowNumber * 10 + colNumber;
    }

    bool operator > (const Piece& other) const
    {
        return rank > other.rank;
    }
};

void printPieces(const vector<Piece> &pieces, const string &name) {
    cout << name + ": ";

    for (int i = 0; i < pieces.size(); ++i) {
        cout << pieces[i].info;

        if (i < pieces.size() - 1)
            cout << ',';
    }

    cout << "\n";
}

int main()
{
    char piece;

    int rowIdx = 1, rowIdxReverse = 8;
    vector<Piece> white{}, black{};
    string input, _, pieceStr;

    for (int i = 1; i <= 17; ++i) {
        if (i % 2 > 0) {
            getline(cin, _);
            continue;
        }

        getline(cin, input);

        int columnIdx = 1, columnIdxReverse = 8;

        for (int j = 2; j < input.length(); j += 4) {
            if ((input[j] < 'a' || input[j] > 'z') && (input[j] < 'A' || input[j] > 'Z'))
                goto done;

            piece = toupper(input[j]);

            pieceStr = piece == 'P' ? "" : string(1, piece);
            pieceStr += (char) (columnIdx + 96);
            pieceStr += (char) (rowIdxReverse + '0');

            if (input[j] >= 'a' && input[j] <= 'z')
                black.emplace_back(pieceStr, piece, rowIdxReverse, columnIdxReverse);
            else
                white.emplace_back(pieceStr, piece, rowIdx, columnIdxReverse);

        done:
            ++columnIdx;
            --columnIdxReverse;
        }

        ++rowIdx;
        --rowIdxReverse;
    }

    sort(white.begin(), white.end(), greater<Piece>());
    sort(black.begin(), black.end(), greater<Piece>());

    printPieces(white, "White");
    printPieces(black, "Black");

    return 0;
}
