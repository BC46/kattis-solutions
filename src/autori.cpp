#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    std::cout << input[0];

    for (int i(1); i < input.length(); ++i) {
        if (input[i] == '-')
            std::cout << static_cast<char>(toupper(input[i + 1]));
    }

    std::cout << std::endl;
    return 0;
}
