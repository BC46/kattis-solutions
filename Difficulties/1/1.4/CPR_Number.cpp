#include <iostream>
#include <vector>

int main()
{
    std::vector<int> c;
    std::string cString;
    std::cin >> cString;

    for (const auto &value : cString)
        if (value != '-') c.push_back(value - '0');

    int result(4 * c[0] + 3 * c[1] + 2 * c[2] + 7 * c[3] + 6 * c[4] + 5 * c[5] + 4 * c[6] + 3 * c[7] + 2 * c[8] + 1 * c[9]);

    std::cout << (result % 11 == 0 ? 1 : 0) << std::endl;
    return 0;
}
