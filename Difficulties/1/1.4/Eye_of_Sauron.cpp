#include <iostream>

int main()
{
    std::string drawing;
    std::cin >> drawing;

    bool foundEye{};
    int leftBars(0), rightBars(0);

    for (unsigned int i(0); i < drawing.length(); ++i) {
        if (drawing[i] == '|') {
            if (foundEye) {
                ++leftBars;
            } else {
                ++rightBars;
            }
        } else if (drawing[i] == ')') {
            foundEye = true;
        }
    }

    std::cout << (leftBars == rightBars ? "correct" : "fix") << std::endl;
    return 0;
}
