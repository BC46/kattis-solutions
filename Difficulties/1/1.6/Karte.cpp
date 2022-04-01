#include <iostream>
#include <map>
#include <set>

int main()
{
    std::map<char, std::set<int>> c {
        { 'P', std::set<int>() },
        { 'K', std::set<int>() },
        { 'H', std::set<int>() },
        { 'T', std::set<int>() }
    };

    char suit;
    int number;
    bool error{};
    std::string s;
    std::cin >> s;

    for (int i(0); i < s.length(); i += 3) {
        suit = s[i];
        number = std::stoi(s.substr(i + 1, 2));

        if (c[suit].find(number) != c[suit].end()) {
            error = true;
            std::cout << "GRESKA" << std::endl;
            break;
        }

        c[suit].insert(number);
    }

    if (!error) {
        std::cout << 13 - c['P'].size() << " ";
        std::cout << 13 - c['K'].size() << " ";
        std::cout << 13 - c['H'].size() << " ";
        std::cout << 13 - c['T'].size() << " ";
    }

    std::cout << std::endl;

    return 0;
}
