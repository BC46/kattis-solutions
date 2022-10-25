#include <iostream>
#include <map>

int main()
{
    std::map<int, int> xMap;
    std::map<int, int> yMap;

    for (int i(0); i < 3; ++i) {
        int x, y;
        std::cin >> x >> y;

        auto xValue(xMap.find(x));
        auto yValue(yMap.find(y));

        if (xValue == xMap.end())
            xMap.insert(std::pair<int, int>(x, 1));
        else
            xValue->second++;

        if (yValue == yMap.end())
            yMap.insert(std::pair<int, int>(y, 1));
        else
            yValue->second++;
    }

    int x, y;

    for (const auto& kv : xMap) {
        if (kv.second % 2 != 0) {
            x = kv.first;
            break;
        }
    }

    for (const auto& kv : yMap) {
        if (kv.second % 2 != 0) {
            y = kv.first;
            break;
        }
    }

    std::cout << x << " " << y << std::endl;
    return 0;
}
