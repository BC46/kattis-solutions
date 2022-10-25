#include <iostream>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    std::cout << "Thank you, " << s << ", and farewell!" << std::endl;
    return 0;
}
