#include <iostream>

int main()
{
    int n, f, num;
    std::cin >> n;

    std::cin >> f;
    n--;

    while (n--) {
        std::cin >> num;

        if (num % f == 0) {
            std::cout << num << std::endl;
            std::cin >> f;

            if (!n--)
                break;
        }
    }

    return 0;
}
