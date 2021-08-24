#include <iostream>

int main()
{
    std::string y, p;
    std::cin >> y >> p;

    std::string result = y;

    if (result.back() == 'e')
        result += "x";
    else if (result.back() == 'a' || result.back() == 'i' || result.back() == 'o' || result.back() == 'u')
        result = result.substr(0, result.size() -1) + "ex";
    else if (result.substr(result.size() -2, result.size()) != "ex")
        result += "ex";

    result += p;

    std::cout << result << std::endl;
    return 0;
}
