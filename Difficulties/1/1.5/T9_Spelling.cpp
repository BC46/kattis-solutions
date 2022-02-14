#include <iostream>
#include <map>

int main()
{
    std::map<char, std::string> keyMap{
        {'a', "2"},
        {'b', "22"},
        {'c', "222"},
        {'d', "3"},
        {'e', "33"},
        {'f', "333"},
        {'g', "4"},
        {'h', "44"},
        {'i', "444"},
        {'j', "5"},
        {'k', "55"},
        {'l', "555"},
        {'m', "6"},
        {'n', "66"},
        {'o', "666"},
        {'p', "7"},
        {'q', "77"},
        {'r', "777"},
        {'s', "7777"},
        {'t', "8"},
        {'u', "88"},
        {'v', "888"},
        {'w', "9"},
        {'x', "99"},
        {'y', "999"},
        {'z', "9999"},
        {' ', "0"}
    };

    int n;
    std::cin >> n;
    std::cin.ignore();

    for (int i(1); i <= n; ++i) {
        std::string input, previous, result;
        std::getline(std::cin, input);

        previous = "A";

        for (const auto &letter : input) {
            std::string t9(keyMap[letter]);

            if (t9[0] == previous[0])
                result += " ";
            result += t9;

            previous = t9;
        }

        std::cout << "Case #" << i << ": " << result << std::endl;
    }

    return 0;
}
