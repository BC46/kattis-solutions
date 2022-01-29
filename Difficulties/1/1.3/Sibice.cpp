#include <iostream>
#include <cmath>

int main()
{
    int n, w, h;
    std::cin >> n >> w >> h;

    int maxLength(sqrt((w * w) + (h * h)));

    for (int i(0); i < n; ++i) {
        int length;
        std::cin >> length;

        std::cout << (length > maxLength ? "NE" : "DA") << std::endl;
    }

    return 0;
}
