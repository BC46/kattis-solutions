#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        std::string addition;
        std::cin >> addition;

        if (addition == "P=NP") {
            std::cout << "skipped" << std::endl;
            continue;
        }

        int plus_location = addition.find('+');
        int n1 = std::stoi(addition.substr(0, plus_location));
        int n2 = std::stoi(addition.substr(plus_location));

        std::cout << n1 + n2 << std::endl;
    }

    return 0;
}
