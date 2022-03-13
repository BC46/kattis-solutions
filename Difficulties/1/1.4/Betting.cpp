#include <iostream>

int main()
{
    float a;
    std::cin >> a;

    float x1(100 / a);
    float x2(100 / (a - 100));

    std::cout << x1 << std::endl << x2 << std::endl;
    return 0;
}
