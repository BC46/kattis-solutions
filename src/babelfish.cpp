#include <iostream>
#include <unordered_map>

int main()
{
    unsigned int spaceIndex;
    std::string w1, w2, line;
    std::unordered_map<std::string, std::string> dict{};

    while (std::getline(std::cin, line) && !line.empty()) {
        spaceIndex = line.find(' ');

        w1 = line.substr(0, spaceIndex);
        w2 = line.substr(spaceIndex + 1);

        dict.insert({w2, w1});
    }

    while (std::getline(std::cin, w1)) {
        auto it = dict.find(w1);

        if (it == dict.end())
            std::cout << "eh\n";
        else
            std::cout << it->second + "\n";
    }

    return 0;
}
