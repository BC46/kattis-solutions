#include <iostream>
#include <vector>
#include <algorithm>

struct Cup {
    int r;
    std::string c;
};

bool isInt(const std::string& str)
{
    for (const char &c : str) {
        if (std::isdigit(c) == 0)
            return false;
    }

    return true;
}

int main()
{
    std::vector<Cup> cups;
    std::string t1, t2;

    int n;
    std::cin >> n;
    while (n--) {
        std::cin >> t1 >> t2;

        if (isInt(t1))
            cups.emplace_back(Cup {std::stoi(t1) / 2, t2});
        else
            cups.emplace_back(Cup {std::stoi(t2), t1});
    }

    std::sort(cups.begin(), cups.end(), [](const Cup &a, const Cup &b) {
        return a.r < b.r;
    });

    for (const auto &cup : cups) {
        std::cout << cup.c << std::endl;
    }

    return 0;
}
