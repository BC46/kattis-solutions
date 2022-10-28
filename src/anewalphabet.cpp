#include <iostream>
#include <map>

int main()
{
    std::map<char, std::string> table {
        { 'a', "@" },
        { 'b', "8" },
        { 'c', "(" },
        { 'd', "|)" },
        { 'e', "3" },
        { 'f', "#" },
        { 'g', "6" },
        { 'h', "[-]" },
        { 'i', "|" },
        { 'j', "_|" },
        { 'k', "|<" },
        { 'l', "1" },
        { 'm', "[]\\/[]" },
        { 'n', "[]\\[]" },
        { 'o', "0" },
        { 'p', "|D" },
        { 'q', "(,)" },
        { 'r', "|Z" },
        { 's', "$" },
        { 't', "']['" },
        { 'u', "|_|" },
        { 'v', "\\/" },
        { 'w', "\\/\\/" },
        { 'x', "}{" },
        { 'y', "`/" },
        { 'z', "2" },
    };

    std::string i, result;
    std::getline(std::cin , i);

    for (const auto &c : i) {
        auto it = table.find(tolower(c));

        if (it == table.end())
            result += c;
        else
            result += it->second;
    }

    std::cout << result << std::endl;
    return 0;
}
