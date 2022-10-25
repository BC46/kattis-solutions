#include <iostream>

int main()
{
    std::string s, s1, s2, s3;
    std::cin >> s;

    unsigned int third(s.length() / 3);
    s1 = s.substr(0, third);
    s2 = s.substr(third, third);
    s3 = s.substr(third * 2, third);

    if (s1 == s2)
        std::cout << s1 << std::endl;
    else if (s2 == s3)
        std::cout << s2 << std::endl;
    else if (s3 == s1)
        std::cout << s3 << std::endl;

    return 0;
}
