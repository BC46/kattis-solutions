#include <iostream>

int main()
{
    std::string x, y, r;
    std::cin >> x >> y;

    if (x == "0" || y == "0") {
        std::cout << "0" << std::endl;
        return 0;
    }

    int total(((static_cast<int>(x.length()) - 1) / 3) * (static_cast<int>(y.length()) - 1) / 3);

    for (int i(0); i < total; ++i)
        r += "S(";

    r += "0";

    for (int i(0); i < total; ++i)
        r += ")";

    std::cout << r << std::endl;
    return 0;
}
