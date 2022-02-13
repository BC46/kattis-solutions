#include <iostream>

int digit_sum(int value) {
    int sum(0);

    for (const auto &number : std::to_string(value))
        sum += (int)number - 48;

    return sum;
}

int main()
{
    while (true) {
        int n;
        std::cin >> n;

        if (n == 0)
            break;

        int p(11);
        while (digit_sum(n * p) != digit_sum(n)) {
            ++p;
        }

        std::cout << p << std::endl;
    }

    return 0;
}
