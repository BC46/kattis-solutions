#include <iostream>

int main()
{
    unsigned long long num, den;

    while (true) {
        unsigned long long whole(0);
        std::cin >> num >> den;

        if (num == 0 || den == 0)
            break;

        whole = num / den;
        num = num % den;

        std::cout << whole << " " << num << " / " << den << std::endl;
    }

    return 0;
}
