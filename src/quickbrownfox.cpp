#include <iostream>
#include <map>
#include <cctype>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string input;
        std::getline(std::cin, input);

        std::map<char, bool> alphabetMap{
                {'a', false},
                {'b', false},
                {'c', false},
                {'d', false},
                {'e', false},
                {'f', false},
                {'g', false},
                {'h', false},
                {'i', false},
                {'j', false},
                {'k', false},
                {'l', false},
                {'m', false},
                {'n', false},
                {'o', false},
                {'p', false},
                {'q', false},
                {'r', false},
                {'s', false},
                {'t', false},
                {'u', false},
                {'v', false},
                {'w', false},
                {'x', false},
                {'y', false},
                {'z', false}
        };

        for (const auto &letter : input) {
            auto pos(alphabetMap.find(static_cast<char>(tolower(letter))));

            if (pos != alphabetMap.end()) {
                pos->second = true;
            }
        }

        std::string missingLetters;
        for (const auto& kv : alphabetMap) {
            if (!kv.second)
                missingLetters += kv.first;
        }

        if (missingLetters.length() == 0)
            std::cout << "pangram" << std::endl;
        else {
            std::cout << "missing ";

            for (const auto &letter : missingLetters)
                std::cout << letter;

            std::cout << std::endl;
        }
    }

    return 0;
}
