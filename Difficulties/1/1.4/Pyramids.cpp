#include <iostream>

int main()
{
    int blocks(1), blocksSide(1), height(0);
    int n;
    std::cin >> n;

    while (true) {
        n -= blocks;

        if (n < 0)
            break;

        height++;
        blocksSide += 2;
        blocks = blocksSide * blocksSide;
    }

    std::cout << height << std::endl;
    return 0;
}
