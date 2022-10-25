#include <iostream>

int main()
{
    int p;
    std::cin >> p;

    for (int i(1); i <= p; ++i) {
        int k, n, s1(0);
        std::cin >> k >> n;

        for (int j(1); j <= n; ++j) {
            s1 += j;
        }

        std::cout << i << " " << s1 << " " << (s1 * 2) - n << " " << s1 * 2 << std::endl;
    }

    return 0;
}
