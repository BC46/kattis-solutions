#include <iostream>

int main()
{
    std::string n;
    std::cin >> n;

    std::cout << (n.substr(0, 3) == "555" ? '1' : '0') << std::endl;
    return 0;
}
