#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::string name;
    int n, s(1);

    while (true) {
        std::vector<std::string> names;

        std::cin >> n;

        if (n == 0)
            break;

        std::cout << "SET " << s++ << std::endl;

        while (n--) {
            std::cin >> name;
            names.push_back(name);
        }

        std::sort(names.begin(), names.end(), [](const std::string &a, const std::string &b)
            -> bool { return a.length() < b.length(); });

        for (int i(0); i < names.size(); i += 2)
            std::cout << names[i] << std::endl;

        for (int i(names.size() - (names.size() % 2 == 0 ? 1 : 2)); i >= 0; i -= 2)
            std::cout << names[i] << std::endl;
    }

    return 0;
}
