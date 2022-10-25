#include <iostream>

int main()
{
    std::string name = "PER";
    int name_index = 0;
    int days = 0;

    std::string input;
    std::cin >> input;

    for (size_t i = 0; i < input.length(); i++) {
        if (input.at(i) != name.at(name_index)) {
            days++;
        }

        if (name_index == name.length() - 1) {
            name_index = 0;
        } else {
            name_index++;
        }
    }

    std::cout << days << std::endl;
    return 0;
}
