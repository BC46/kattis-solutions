#include <iostream>

int main()
{
    std::string new_name = "";
    char last_character;

    std::string name;
    std::cin >> name;

    for (char character : name) {
        if (character == last_character)
            continue;

        new_name += character;

        last_character = character;
    }

    std::cout << new_name << std::endl;
    return 0;
}
