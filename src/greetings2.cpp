#include <iostream>

int main()
{
    std::string greeting;
    std::string output = "h";

    std::cin >> greeting;

    for (size_t i = 0; i < greeting.size(); i++) {
        if (greeting[i] == 'e') {
            output += "ee";
        }
    }

    output += "y";

    std::cout << output;
    return 0;
}
