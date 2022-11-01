#include <iostream>

int main()
{
    int r, n, room;

    std::cin >> r >> n;
    bool rooms[r];

    for (int i = 0; i < r; ++i)
        rooms[i] = false;

    for (int i = 0; i < n; ++i) {
        std::cin >> room;
        rooms[room - 1] = true;
    }

    if (r == n)
        std::cout << "too late" << std::endl;
    else {
        for (int i = 0; i < r; ++i) {
            if (!rooms[i]) {
                std::cout << i + 1 << std::endl;
                break;
            }
        }
    }

    return 0;
}
