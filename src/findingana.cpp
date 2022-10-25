#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;

    for (int i(s.find("a")); i < s.length(); ++i) {
        std::cout << s[i];
    }

    std::cout << std::endl;
    return 0;
}
