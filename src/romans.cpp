#include <cmath>
#include <iostream>

int main()
{
    float miles;
    std::cin >> miles;

    int roman_paces = round(miles * 1000 * (5280.0 / 4854.0));

    std::cout << roman_paces << std::endl;
    return 0;
}
