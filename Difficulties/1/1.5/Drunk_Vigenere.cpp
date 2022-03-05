#include <iostream>

int charIntValue(char letter) {
    return (int) letter - 65;
}

char rotateForwards(char letter, int rotationValue) {
    int actualRotation(charIntValue(letter) + rotationValue);
    int newIndex(actualRotation > 25 ? actualRotation % 26 : actualRotation);

    return (char) (newIndex + 65);
}

char rotateBackwards(char letter, int rotationValue) {
    int actualRotation(charIntValue(letter) - rotationValue);
    int newIndex(actualRotation < 0 ? 26 + actualRotation : actualRotation);

    return (char) (newIndex + 65);
}

int main()
{
    std::string c, k, result;
    std::cin >> c >> k;

    for (int i(0); i < c.length(); ++i) {
        result += i % 2 == 0
                ? rotateBackwards(c[i], charIntValue(k[i]))
                : rotateForwards(c[i], charIntValue(k[i]));
    }

    std::cout << result << std::endl;
    return 0;
}
