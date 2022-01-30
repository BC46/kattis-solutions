#include <iostream>
#include <set>

int main()
{
    std::set<int> days;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int s, t;
        std::cin >> s >> t;

        for (; s <= t; ++s) {
            days.insert(s);
        }
    }

    std::cout << days.size() << std::endl;
    return 0;
}
