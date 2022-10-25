#include <iostream>

int main()
{
    float whitespace_amount = 0;
    float lowercase_amount = 0;
    float uppercase_amount = 0;
    float symbol_amount = 0;

    std::string input;
    std::cin >> input;

    for (char character : input) {
        if (character == '_') ++whitespace_amount;
        else if (islower(character)) ++lowercase_amount;
        else if (isupper(character)) ++uppercase_amount;
        else if (!isalpha(character)) ++symbol_amount;
    }

    std::cout << whitespace_amount / input.length() << std::endl;
    std::cout << lowercase_amount / input.length() << std::endl;
    std::cout << uppercase_amount / input.length() << std::endl;
    std::cout << symbol_amount / input.length() << std::endl;
    return 0;
}
