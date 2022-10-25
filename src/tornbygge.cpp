#include <iostream>

int main()
{
    int n, t(0), block, base(0);
    std::cin >> n;

    while (n--) {
        std::cin >> block;

        if (block > base)
            ++t;

        base = block;
    }

    std::cout << t << std::endl;
    return 0;
}
