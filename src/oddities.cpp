#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n--) {
        int x;
        std::cin >> x;

        std::cout << x << " is " << (x % 2 == 0 ? "even" : "odd") << std::endl;
    }

    return 0;
}
