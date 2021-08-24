#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    float s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;

    float sp = (s1 + s2 + s3 + s4) / 2;

    float ma = sqrt((sp - s1) * (sp - s2) * (sp - s3) * (sp - s4));

    std::cout << std::setprecision(7) << ma << std::endl;
    return 0;
}
