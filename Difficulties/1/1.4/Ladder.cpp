#include <iostream>
#include <math.h>

int main()
{
    int h, v;
    std::cin >> h >> v;

    int length = ceil(h / sin(v * (M_PI	/ 180)));

    std::cout << length << std::endl;
    return 0;
}
