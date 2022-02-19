#include <iostream>

void printPieces(const int p[], int size) {
    for (int i(0); i < size; ++i) {
        std::cout << p[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    int p[5];

    for (int i(0); i < 5; ++i)
        std::cin >> p[i];

    while (!(p[0] < p[1] && p[1] < p[2] && p[2] < p[3] && p[3] < p[4])) {
        for (int i(0); i < 5 - 1; ++i) {
            if (p[i] > p[i + 1]) {
                int temp(p[i]);
                p[i] = p[i + 1];
                p[i + 1] = temp;

                printPieces(p, 5);
            }
        }
    }

    return 0;
}
