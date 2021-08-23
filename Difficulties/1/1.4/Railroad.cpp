#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    int ends = x * 2 + y * 3;

    std::cout << (ends % 2 == 0 ? "possible" : "impossible");
    return 0;
}
