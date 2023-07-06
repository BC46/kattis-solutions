#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string dir;
    int x = 500, y = 500, minX = 500, minY = 500, maxX = 500, maxY = 500;

    char map[1000][1000];
    memset(&map, ' ', sizeof(map));

    while (cin >> dir) {
        if (dir == "up") {
            map[--y][x] = '*';

            if (y < minY)
                minY = y;
        } else if (dir == "down") {
            map[++y][x] = '*';

            if (y > maxY)
                maxY = y;
        } else if (dir == "right") {
            map[y][++x] = '*';

            if (x > maxX)
                maxX = x;
        } else {
            map[y][--x] = '*';

            if (x < minX)
                minX = x;
        }
    }

    map[500][500] = 'S';
    map[y][x] = 'E';

    cout << string(maxX - minX + 3, '#') << '\n';

    for (int cy = minY; cy <= maxY; ++cy) {
        cout << '#';

        for (int cx = minX; cx <= maxX; ++cx)
            cout << map[cy][cx];

        cout << "#\n";
    }

    cout << string(maxX - minX + 3, '#') << '\n';

    return 0;
}
