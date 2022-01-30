#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    for (unsigned int i(0); i < input.length(); ++i) {
        if ((i <= input.length() - 2 && input[i] == ':' && input[i + 1] == ')') ||
            (i <= input.length() - 2 && input[i] == ';' && input[i + 1] == ')') ||
            (i <= input.length() - 3 && input[i] == ':' && input[i + 1] == '-' && input[i + 2] == ')') ||
            (i <= input.length() - 3 && input[i] == ';' && input[i + 1] == '-' && input[i + 2] == ')')) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
