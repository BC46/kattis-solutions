#include <iostream>
#include <cmath>

int main()
{
    int n;
    float t, c(400);
    std::cin >> n;

    while (n--) {
        std::cin >> t;
        std::cout << (t == 0 ? 0 : std::ceil(t / c)) << std::endl;
    }

    return 0;
}
