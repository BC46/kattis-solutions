#include <iostream>
#include <set>

int main()
{
    int x, maxValue, result(0);
    std::string xString, temp;
    std::set<char> xSet;

    std::cin >> xString;

    for (char &number : xString) {
        temp += "9";
        xSet.insert(number);
    }

    x = stoi(xString) + 1;
    maxValue = stoi(temp);

    for (; x <= maxValue; ++x) {
        temp = std::to_string(x);
        std::set<char> tempSet;

        for (const auto &tempLetter : temp) {
            tempSet.insert(tempLetter);
        }

        if (tempSet == xSet) {
            result = x;
            break;
        }
    }

    std::cout << result << std::endl;
    return 0;
}
