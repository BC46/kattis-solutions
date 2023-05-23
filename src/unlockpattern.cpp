#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Field {
    int x, y;

    [[nodiscard]] double dist(const Field& other) const {
        return sqrt(pow(x - other.x, 2.0f) + pow(y - other.y, 2.0f));
    }
};

int main()
{
    double dist = 0;

    int fields[3][3];
    Field cf, nf;

    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            cin >> fields[y][x];

            if (fields[y][x] == 1)
                cf = Field {y, x};
        }
    }

    for (int i = 2; i <= 9; ++i) {
        for (int y = 0; y < 3; ++y) {
            for (int x = 0; x < 3; ++x) {
                if (fields[y][x] != i)
                    continue;

                nf = Field {y, x};
                dist += nf.dist(cf);
                cf = nf;
            }
        }
    }

    cout << setprecision(10) << dist << endl;
    return 0;
}
