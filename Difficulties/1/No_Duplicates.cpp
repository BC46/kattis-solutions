#include <iostream>
#include <vector>

int main()
{
    bool no_word_repeated = true;
    std::string line;
    std::getline(std::cin, line);

    std::vector<std::string> words;
    int i = 0;

    while (i < line.length()) {
        int word_end = line.find(' ', i);

        std::string word = line.substr(i, word_end - i);

        words.push_back(word);

        i += word.length() + 1;

        int occurrence = 0;

        for (auto saved_word : words) {
            if (saved_word == word) {
                ++occurrence;
            }

            if (occurrence == 2) {
                no_word_repeated = false;
            }
        }

        if (!no_word_repeated)
            break;
    }

    std::cout << (no_word_repeated ? "yes" : "no");

    return 0;
}
