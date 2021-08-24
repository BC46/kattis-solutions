#include <iostream>
#include <string>

int main()
{
    int l, r;
    std::cin >> l >> r;

    std::string message;

    if (l == 0 && r == 0) {
        message = "Not a moose";
    } else if (l != r) {
        message = "Odd " + std::to_string(l > r ? l * 2 : r * 2);
    } else {
        message = "Even " + std::to_string(l * 2);
    }

    std::cout << message << std::endl;
    return 0;
}
