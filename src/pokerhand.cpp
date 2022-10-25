#include <iostream>
#include <map>

int main()
{
    std::map<char, int> occurences;

    for (size_t i = 0; i < 5; i++) {
        std::string hand;
        std::cin >> hand;

        if (occurences.find(hand[0]) == occurences.end()) {
            occurences[hand[0]] = 1;
        } else {
            occurences[hand[0]]++;
        }
    }

    int highest_occurence = 0;

    for (const auto &key : occurences) {
        int occurence = occurences.find(key.first)->second;

        if (occurence > highest_occurence) {
            highest_occurence = occurence;
        }
    }

    std::cout << highest_occurence << std::endl;
    return 0;
}
