#include <iostream>

int main()
{
    int spell_amount;
    std::cin >> spell_amount;

    for (int i = 1; i <= spell_amount; ++i) {
        std::cout << i;
        std::cout << " Abracadabra" << std::endl;
    }

    return 0;
}
