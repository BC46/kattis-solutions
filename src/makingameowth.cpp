#include <iostream>

int main()
{
    unsigned int n, p, x, y, c, total = 0, page = 1;
    std::cin >> n >> p >> x >> y;

    c = p;
    while (c != 0) {
        if (page % n == 0)
            total += y;
        else {
            total += x;
            --c;
        }

        ++page;
    }

    if (page % n == 0)
        total += y;

    std::cout << total << std::endl;
    return 0;
}
