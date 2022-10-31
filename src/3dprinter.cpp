#include <iostream>

int main()
{
    int n, d = 0, p = 1;
    std::cin >> n;

    while (n > 0) {
        if (n >= p * 2)
            p *= 2;
        else
            n -= p;

        ++d;
    }

    std::cout << d << std::endl;
    return 0;
}
