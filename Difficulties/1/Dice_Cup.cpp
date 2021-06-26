#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int lowest = n > m ? m : n;

    for (size_t i = 0; i <= abs(n - m); i++) {
        std::cout << lowest + i + 1 << std::endl;
    }

    return 0;
}
