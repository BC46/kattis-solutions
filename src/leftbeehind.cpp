#include <iostream>

int main()
{
    std::string message;
    unsigned int sweet, sour;

    while (std::cin >> sweet >> sour && sweet + sour > 0) {
        if (sour + sweet == 13)
            message = "Never speak again.";
        else if (sour > sweet)
            message = "Left beehind.";
        else if (sour < sweet)
            message = "To the convention.";
        else
            message = "Undecided.";

        std::cout << message << "\n";
    }

    return 0;
}
