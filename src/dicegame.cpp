#include <iostream>

int main()
{
    std::string w;
    int gScore(0), gVal;
    int eScore(0), eVal;

    for (int i(0); i < 4; ++i) {
        std::cin >> gVal;
        gScore += gVal;
    }

    for (int i(0); i < 4; ++i) {
        std::cin >> gVal;
        gScore += gVal;
    }

    if (gScore > eScore)
        w = "Gunnar";
    else if (eScore > gScore)
        w = "Emma";
    else
        w = "Tie";

    std::cout << w << std::endl;
    return 0;
}
