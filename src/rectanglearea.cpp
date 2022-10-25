#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double width(fabs(fabs(x1) + fabs(x2)));
    double height(fabs(fabs(y1) + fabs(y2)));

    std::cout << std::setprecision(5) << width * height << std::endl;
    return 0;
}
