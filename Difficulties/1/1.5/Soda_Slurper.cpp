#include <iostream>

int main()
{
    unsigned int e, f, c;
    std::cin >> e >> f >> c;

    e += f;

    unsigned int i(0);
    while (e >= c) {
        e -= c - 1;
        ++i;
    }

    std::cout << i << std::endl;
    return 0;
}
