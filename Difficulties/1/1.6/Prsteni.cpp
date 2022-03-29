#include <iostream>

int divisor(int s, int l) {
    return l == 0 ? s : divisor(l, s % l);
}

int main()
{
    int n, r, nr, d;
    std::cin >> n >> r;

    while (n-- -1) {
        std::cin >> nr;
        d = divisor(nr, r);

        std::cout << r / d << "/" << nr / d << std::endl;
    }

    return 0;
}
