#include <iostream>

int main()
{
    unsigned int index;
    std::string s, ids, stringId, result;

    std::getline(std::cin, s);
    std::cin >> ids;

    for (int i = 0; i < ids.length(); i += 3) {
        stringId = ids.substr(i, 3);
        index = std::stoi(stringId);

        result += s[index - 1];
    }

    std::cout << result << std::endl;
    return 0;
}
