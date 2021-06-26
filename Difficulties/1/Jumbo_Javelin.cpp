#include <iostream>

int main()
{
    int sum = 1;

    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        int l;
        std::cin >> l;

        sum += l - 1;
    }

    std::cout << sum;

    return 0;
}
