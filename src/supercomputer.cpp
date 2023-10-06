#include <iostream>
#include <bitset>

using namespace std;

constexpr int ps = 1000;
constexpr int pa = 1000000 / ps;

class MemoryManager {
public:
    void flipBit(int i) {
        int pi = (i - 1) / ps;
        int bi = (i - 1) % ps;

        partitions[pi].flip(bi);
    }

    size_t count(int l, int r) {
        l--;
        r--;

        size_t result = 0;

        while (l <= r) {
            int pi = l / ps;

            if ((l % ps == 0 || l == 0) && r - l >= ps - 1) {
                result += partitions[pi].count();

                l += ps;
            } else {
                int bi = l % ps;

                result += partitions[pi][bi];

                l++;
            }
        }

        return result;
    }

private:
    bitset<ps> partitions[pa];
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char query;

    int n, k, l, r, i;
    cin >> n >> k;

    MemoryManager mm;

    while (k--) {
        cin >> query;

        if (query == 'F') {
            cin >> i;
            mm.flipBit(i);

            continue;
        }

        cin >> l >> r;

        cout << mm.count(l, r) << '\n';
    }

    return 0;
}
