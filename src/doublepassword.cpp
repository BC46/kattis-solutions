#include <iostream>

int main()
{
    int distinct(1);
    std::string p1, p2;
    std::cin >> p1 >> p2;

    for (int i(0); i < p1.length(); ++i) {
        if (p1[i] != p2[i])
            distinct *= 2;
    }

    std::cout << distinct << std::endl;
    return 0;
}
