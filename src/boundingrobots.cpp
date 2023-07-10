#include <iostream>

using namespace std;

int main()
{
    char dir;
    int w, l, n, seg;

    while (cin >> w >> l && w > 0 && l > 0) {
        int x = 0, y = 0, rx = 0, ry = 0;

        cin >> n;

        while (n--) {
            cin >> dir >> seg;

            switch (dir) {
                case 'u':
                    y += seg;
                    ry += seg;

                    if (y >= l)
                        y = l - 1;
                    break;
                case 'd':
                    y -= seg;
                    ry -= seg;

                    if (y < 0)
                        y = 0;
                    break;
                case 'r':
                    x += seg;
                    rx += seg;

                    if (x >= w)
                        x = w - 1;
                    break;
                case 'l':
                    x -= seg;
                    rx -= seg;

                    if (x < 0)
                        x = 0;
                    break;
            }
        }

        cout << "Robot thinks " << rx << " " << ry << '\n';
        cout << "Actually at " << x << " " << y << "\n\n";
    }

    return 0;
}
