#include <iostream>
#include <cmath>

int main()
{
    int l, r;
    std::cin >> l >> r;

    std::cout << (l <= sqrt(2) * r ? "fits" : "nope") << std::endl;
    return 0;
}
