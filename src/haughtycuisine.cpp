#include <iostream>
#include <vector>
#include <random>

int main()
{
    std::vector<std::vector<std::string>> menus(100);

    int n, d;
    std::string dish;

    std::cin >> n;
    for (int i = n; i > 0; --i) {
        std::cin >> d;

        while (d--) {
            std::cin >> dish;
            menus[i - 1].push_back(dish);
        }
    }

    std::random_device device;
    std::default_random_engine engine {device() };
    std::uniform_int_distribution<int> dist {0, n - 1};
    std::vector<std::string> & randomMenu = menus[dist(engine)];

    std::cout << randomMenu.size() << "\n";
    for (const auto & dish : randomMenu)
        std::cout << dish << "\n";

    return 0;
}
