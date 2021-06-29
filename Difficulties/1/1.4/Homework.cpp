#include <iostream>
#include <string>

int main()
{
    int sum = 0;

    std::string input;
    std::cin >> input;

    int i = 0;
    while (i < input.length()) {
        int section_end = input.find(';', i);

        if (section_end == std::string::npos) {
            section_end = input.length();
        }

        std::string section = input.substr(i, section_end - i);

        int separator_position = section.find('-');

        if (separator_position == std::string::npos) {
            sum++;
        } else {
            std::string first_number = section.substr(0, separator_position);
            std::string second_number = section.substr(separator_position + 1);

            sum += std::stoi(second_number) - std::stoi(first_number) + 1;
        }

        i += section.length() + 1;
    }

    std::cout << sum << std::endl;

    return 0;
}
