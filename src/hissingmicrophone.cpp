#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    bool double_s = false;
    bool is_previous_s = false;

    for (auto letter : input) {
        if (letter == 's') {
            if (is_previous_s) {
                std::cout << "hiss" << std::endl;
                return 0;
            } else {
                is_previous_s = true;
            }
        } else {
            is_previous_s = false;
        }
    }

    std::cout << "no hiss" << std::endl;

    return 0;
}
