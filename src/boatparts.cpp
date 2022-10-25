#include <iostream>
#include <set>

int main()
{
    int p, n;
    std::cin >> p >> n;

    std::set<std::string> parts;

    for (size_t i = 1; i <= n; i++) {
        std::string part;
        std::cin >> part;

        parts.insert(part);

        if (parts.size() == p) {
            std::cout << i << std::endl;
            break;
        }
    }

    if (parts.size() < p) {
        std::cout << "paradox avoided" << std::endl;
    }

    return 0;
}
