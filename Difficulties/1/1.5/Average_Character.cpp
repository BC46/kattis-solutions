#include <iostream>

int main()
{
    int total(0);
    std::string s;
    std::getline(std::cin, s);

    for (const char &c : s) {
        total += static_cast<int>(c);
    }

    char avg(static_cast<char>(total / s.length()));

    std::cout << avg << std::endl;
    return 0;
}
