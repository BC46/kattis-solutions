#include <iostream>
#include <set>

int main()
{
    int n, nt, d(1), h(0), dh;
    std::cin >> n;
    std::multiset<int, std::greater<>> tSeeds;

    for (int i(0); i < n; ++i) {
        std::cin >> nt;
        tSeeds.insert(nt);
    }

    for (const auto &t : tSeeds) {
        dh = t + ++d;

        if (dh > h)
            h = dh;
    }

    std::cout << h << std::endl;
    return 0;
}
