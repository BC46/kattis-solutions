#include <iostream>
#include <vector>

int main()
{
    std::vector<int> rooms{};
    int n, m, i(0);
    std::cin >> n >> m;

    while (n--) {
        rooms.push_back(0);
    }

    while (m--) {
        rooms[i]++;

        if (++i == rooms.size())
            i = 0;
    }

    for (const auto &room : rooms) {
        std::cout << std::string(room, '*') << std::endl;
    }

    return 0;
}
