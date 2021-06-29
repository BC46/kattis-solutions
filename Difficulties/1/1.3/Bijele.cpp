#include <iostream>

class ChessPiece {
    public:
        int expected_amount;
        int actual_amount;
        ChessPiece(int expected_amount, int actual_amount) {
            this->expected_amount = expected_amount;
            this->actual_amount = actual_amount;
        }

        int get_result() {
            return expected_amount - actual_amount;
        }
};

int main()
{
    int expected_amounts[6] = { 1, 1, 2, 2, 2, 8 };

    for (size_t i = 0; i < 6; i++) {
        int actual_amount;
        std::cin >> actual_amount;

        ChessPiece chess_piece(expected_amounts[i], actual_amount);
        std::cout << chess_piece.get_result() << " ";
    }

    return 0;
}
