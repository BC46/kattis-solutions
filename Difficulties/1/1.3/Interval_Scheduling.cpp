#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    if (n <= 1)  {
        std::cout << 1 << std::endl;
        return 0;
    }

    int max_overlaps(0);

    std::vector<std::pair<int, int>> pairs;

    for (size_t i = 0; i < n; ++i) {
        int s, f;
        std::cin >> s >> f;

        pairs.emplace_back(std::make_pair(s, f));
    }

    std::sort(pairs.begin(), pairs.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return a.second < b.second;
    });

    int last_end(pairs[0].second);

    for (int i(1); i < n; ++i) {
        if (pairs[i].first < last_end) {
            ++max_overlaps;
        } else {
            last_end = pairs[i].second;
        }
    }

    std::cout << n - max_overlaps << std::endl;
    return 0;
}
