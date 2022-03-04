#include <iostream>

void printEntry(int val, int b, std::string whitespace) {
    if (val >= b) {
        val -= b;
        std::cout << "*" << whitespace;
    } else {
        std::cout << "." << whitespace;
    }
}

int main()
{
    std::string input;
    int n[4], b(8);

    std::cin >> input;
    for (int i(0); i < 4; ++i) {
        n[i] = input[i] - '0';
    }

    for (int i(0); i < 4; ++i) {
        printEntry(n[0], b, " ");
        printEntry(n[1], b, "   ");
        printEntry(n[2], b, " ");
        printEntry(n[3], b, "");

        std::cout << std::endl;

        b /= 2;
    }

    return 0;
}
