#include <iostream>

int charIntValue(char letter) {
    return (int) letter - 65;
}

int rotationValue(const std::string &input) {
    int value(0);

    for (const char &letter : input) {
        value += charIntValue(letter);
    }

    return value;
}

std::string rotate(const std::string &input, int rotationValue) {
    std::string result;

    for (const char &letter : input) {
        int actualRotation(charIntValue(letter) + rotationValue);
        int newIndex(actualRotation > 25 ? actualRotation % 26 : actualRotation);

        result += (char) (newIndex + 65);
    }

    return result;
}

std::string rotateBasedOnString(const std::string &input, const std::string &other) {
    std::string result;

    for (int i(0); i < input.length(); ++i) {
        int otherCharIntValue(charIntValue(other[i]));

        int actualRotation(otherCharIntValue + charIntValue(input[i]));
        int newIndex(actualRotation > 25 ? actualRotation % 26 : actualRotation);

        result += (char) (newIndex + 65);
    }

    return result;
}

int main()
{
    std::string input;
    std::cin >> input;

    std::string firstHalf(input.substr(0, (input.length() / 2)));
    std::string secondHalf(input.substr(input.length() / 2));

    int rotationValue1(rotationValue(firstHalf));
    int rotationValue2(rotationValue(secondHalf));

    std::string newFirstHalf(rotate(firstHalf, rotationValue1));
    std::string newSecondHalf(rotate(secondHalf, rotationValue2));

    std::string result(rotateBasedOnString(newFirstHalf, newSecondHalf));

    std::cout << result << std::endl;
    return 0;
}
