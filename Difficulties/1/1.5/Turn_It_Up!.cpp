#include <iostream>

int main()
{
    int v(7), n;
    std::cin >> n;

    std::cin.ignore();

    while (n--) {
        std::string request;
        std::getline(std::cin, request);

        if (request == "Skru op!") {
            if (++v > 10)
                v = 10;
        } else if (request == "Skru ned!") {
            if (--v < 0)
                v = 0;
        }
    }

    std::cout << v << std::endl;
    return 0;
}
