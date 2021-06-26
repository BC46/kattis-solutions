#include <iostream>
#include <math.h>

int main()
{
    int sum = 0;

    int n;
    std::cin >> n;

    for (size_t i = 1; i <= n; i++) {
        std::string p;
        std::cin >> p;

        int p_number = std::stoi(p.substr(0, p.size()-1));
        int p_pow = p.back() - '0';

        sum += pow(p_number, p_pow);
    }

    std::cout << sum;
    return 0;
}
