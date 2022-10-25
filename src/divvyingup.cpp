#include <iostream>

int main()
{
    unsigned int n, w, total = 0, dividedTotal;
    std::cin >> n;

    while (n--) {
        std::cin >> w;
        total += w;
    }

    dividedTotal = (total / 3) * 3;
    std::cout << (total == dividedTotal ? "yes" : "no") << std::endl;
    return 0;
}
