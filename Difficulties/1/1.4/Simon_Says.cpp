#include <iostream>
#include <string>

int main()
{
    int c;
    std::cin >> c;
    std::cin.ignore();

    for (size_t i = 0; i < c; i++) {
        std::string line;
        std::getline(std::cin, line);

        std::size_t initial_line_length = line.length();

        if (line.find("Simon says") != std::string::npos) {
            line = line.erase(0, 10);
        }

        if (initial_line_length != line.length())
            std::cout << line << std::endl;
    }

    return 0;
}
