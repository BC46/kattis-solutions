#include <iostream>

int main()
{
    int sum = 0;
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        sum += num;
    }

    std::cout << sum << std::endl;

    return 0;
}
