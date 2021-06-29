#include <iostream>
#include <vector>
#include <set>

int main()
{
    int t;
    std::cin >> t;

    for (size_t i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        std::set<std::string> cities;

        for (size_t j = 0; j < n; j++) {
            std::string city;
            std::cin >> city;

            if (cities.find(city) == cities.end()) {
                cities.insert(city);
            }
        }

        std::cout << cities.size() << std::endl;
    }

    return 0;
}
