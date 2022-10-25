#include <iostream>

int main()
{
    int position = 1;

    std::string input;
    std::cin >> input;

    for (char character : input) {
        if (character == 'A') {
            if (position == 1) {
                ++position;
            } else if (position == 2) {
                --position;
            }
        } else if (character == 'B') {
            if (position == 2) {
                ++position;
            } else if (position == 3) {
                --position;
            }
        } else if (character == 'C') {
            if (position == 1) {
                position = 3;
            } else if (position == 3) {
                position = 1;
            }
        }
    }

    std::cout << position << std::endl;
    return 0;
}
