#include <iostream>
#include <map>

int main()
{
    int x, maxValue, result(0);
    std::string xString, temp;
    std::map<char, int> xMap;

    std::cin >> xString;

    for (char &number : xString) {
        temp += "9";

        if (xMap.find(number) == xMap.end()) {
            xMap.insert(std::pair<char, int>(number, 0));
        } else {
            xMap[number]++;
        }
    }

    x = stoi(xString) + 1;
    maxValue = stoi(temp);

    for (; x <= maxValue; ++x) {
        temp = std::to_string(x);
        std::map<char, int> tempMap;

        bool hasSameCharacters{true};

        for (const auto &tempLetter : temp) {
            if (tempMap.find(tempLetter) == tempMap.end()) {
                if (xMap.find(tempLetter) == xMap.end()) {
                    hasSameCharacters = false;
                    break;
                }

                tempMap.insert(std::pair<char, int>(tempLetter, 0));
            } else {
                tempMap[tempLetter]++;
            }
        }

        if (hasSameCharacters) {
            bool hasSameOccurrences{true};

            for (const auto &key : xMap) {
                int xOccurrences = xMap.find(key.first)->second;
                int tempOccurrences = tempMap.find(key.first)->second;

                if (xOccurrences != tempOccurrences) {
                    hasSameOccurrences = false;
                    break;
                }
            }

            if (hasSameOccurrences) {
                result = x;
                break;
            }
        }
    }

    std::cout << result << std::endl;
    return 0;
}
