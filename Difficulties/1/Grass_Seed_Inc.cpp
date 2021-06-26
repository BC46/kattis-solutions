#include <iostream>

int main()
{
    float c;
    std::cin >> c;

    int l;
    std::cin >> l;

    float square_m_lawn = 0;

    for (size_t i = 0; i < l; i++) {
        float wi, li;
        std::cin >> wi >> li;

        square_m_lawn += wi * li;
    }

    float price = square_m_lawn * c;

    std::cout << std::fixed << price;
    return 0;
}
