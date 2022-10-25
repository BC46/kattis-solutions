#include <iostream>

int main()
{
    std::string input, requirement;
    std::cin >> input >> requirement;

    std::cout << (input.length() >= requirement.length() ? "go" : "no") << std::endl;
    return 0;
}
