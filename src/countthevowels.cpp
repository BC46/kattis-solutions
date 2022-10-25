#include <iostream>
#include <vector>

int main()
{
    std::vector<char> vowels {'a', 'e', 'i', 'o', 'u'};
    char lower;

    int s(0);
    std::string input;
    std::getline(std::cin, input);

    for (const auto &letter : input) {
        lower = static_cast<char>(tolower(letter));

        for (const auto &vowel : vowels) {
            if (lower == vowel) {
                ++s;
                break;
            }
        }
    }

    std::cout << s << std::endl;
    return 0;
}
