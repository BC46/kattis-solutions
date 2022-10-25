#include <iostream>

int main()
{
    bool missing{};
    int n, num, prev(0);
    std::cin >> n;

    for (int i(0); i < n; ++i) {
        std::cin >> num;

        while (prev < num - 1) {
            std::cout << ++prev << std::endl;
            missing = true;
        }

        prev = num;
    }

    if (!missing)
        std::cout << "good job" << std::endl;

    return 0;
}
