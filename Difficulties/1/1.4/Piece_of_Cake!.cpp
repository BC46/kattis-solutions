#include <iostream>

int main()
{
    int t = 4;
    int n, h, v;
    std::cin >> n >> h >> v;

    int largest_width = v > n / 2 ? v : n - v;
    int largest_height = h > n / 2 ? h : n - h;

    std::cout << largest_width * largest_height * t << std::endl;
    return 0;
}
