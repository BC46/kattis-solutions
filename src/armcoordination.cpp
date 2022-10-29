#include <iostream>

struct Point {
    int x;
    int y;
};

int main()
{
    int x, y, r;
    std::cin >> x >> y >> r;

    Point tl = { x - r, y + r };
    Point tr = { x + r, y + r };
    Point br = { x + r, y - r };
    Point bl = { x - r, y - r };

    std::cout << tl.x << " " << tl.y << std::endl;
    std::cout << tr.x << " " << tr.y << std::endl;
    std::cout << br.x << " " << br.y << std::endl;
    std::cout << bl.x << " " << bl.y << std::endl;

    return 0;
}
