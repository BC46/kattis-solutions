#include <iostream>

int main()
{
    int n, t, b(0), lb(0);
    std::cin >> n;

    while (n--) {
        std::cin >> t;
        b += t;

        if (b > lb)
            lb = b;
    }

    std::cout << +lb << std::endl;
    return 0;
}
