#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, count = 0;
    cin >> n;

    unordered_map<int, int> arrows;

    while (n--) {
        cin >> b;
        auto it = arrows.find(b);

        if (it == arrows.end() || it->second == 0) {
            if (b > 1) {
                auto it2 = arrows.find(b - 1);

                if (it2 == arrows.end())
                    arrows.emplace( b - 1, 1);
                else
                    it2->second++;
            }

            ++count;
        } else {
            it->second--;

            auto it2 = arrows.find(b - 1);

            if (it2 == arrows.end()) {
                if (b > 1)
                    arrows.emplace(b - 1, 1);
            } else
                it2->second++;
        }
    }

    cout << count << '\n';
    return 0;
}
