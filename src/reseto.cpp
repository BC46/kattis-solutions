#include <iostream>
#include <vector>

using namespace std;

struct v {
    int num;
    bool active;
};

int main()
{
    int n, k;
    cin >> n >> k;

    vector<v> values(n - 1);

    for (int i = 0; i < n - 1; ++i)
        values[i] = v{ i + 2, true };

    int lowestIndex = 0;

    while (true) {
        int current;

        for (int i = lowestIndex; i < n - 1; ++i) {
            if (values[i].active) {
                current = values[i].num;
                lowestIndex = i + 1;
                break;
            }
        }

        for (int i = current - 2; i < n - 1; i += current) {
            if (values[i].active) {
                values[i].active = false;

                if (--k == 0) {
                    cout << values[i].num << '\n';
                    return 0;
                }
            }
        }
    }
}
