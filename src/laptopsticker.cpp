#include <iostream>

int main()
{
    int wc, hc, ws, hs;
    std::cin >> wc >> hc >> ws >> hs;

    std::cout << (wc > ws + 1 && hc > hs + 1);
    return 0;
}
