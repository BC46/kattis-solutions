#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        int r, e, c;
        std::cin >> r >> e >> c;

        if (e - c < r) {
            std::cout << "do not advertise" << std::endl;
        } else if (e - c > r) {
            std::cout << "advertise" << std::endl;
        } else {
            std::cout << "does not matter" << std::endl;
        }
    }

    return 0;
}
