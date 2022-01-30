#include <iostream>

int main()
{
    bool foundOne{};

    for (int i(1); i <= 5; ++i) {
        std::string input;
        std::cin >> input;

        if (input.find("FBI") != std::string::npos) {
            std::cout << i << " ";
            foundOne = true;
        }
    }

    if (!foundOne) {
        std::cout << "HE GOT AWAY!" << std::endl;
    }

    return 0;
}
