#include <iostream>
#include <set>

int main()
{
    int lives(10);
    std::string word, guessedLetters;
    std::cin >> word >> guessedLetters;

    std::set<char> wordLetters;
    std::set<char>::iterator it;

    for (const auto &letter : word)
        wordLetters.insert(letter);

    for (const auto &letter : guessedLetters) {
        it = wordLetters.find(letter);

        if (it == wordLetters.end()) {
            if (--lives == 0) break;
        }
        else
            wordLetters.erase(it);
    }

    std::cout << (wordLetters.empty() ? "WIN" : "LOSE") << std::endl;
    return 0;
}
