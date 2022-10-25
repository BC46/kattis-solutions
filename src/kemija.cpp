#include <iostream>
#include <vector>

int main()
{
    std::vector<char> vowels { 'a', 'e', 'i', 'o', 'u'};
    std::string s, r;
    std::getline(std::cin, s);

    for (int i(0); i < s.length(); ++i) {
        bool isVowel{};
        for (const auto &vowel : vowels) {
            if (vowel == s[i]) {
                isVowel = true;
                break;
            }
        }

        r += s[i];

        if (isVowel && s[i + 1] == 'p' && s[i] == s[i + 2])
            i += 2;
    }

    std::cout << r << std::endl;
    return 0;
}
