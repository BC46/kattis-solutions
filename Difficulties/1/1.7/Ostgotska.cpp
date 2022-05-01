#include <iostream>
#include <sstream>

int main()
{
    double wc(0), ae(0);

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);

    while (iss >> input) {
        for (int i(0); i < input.length() - 1; ++i) {
            if (input[i] == 'a' && input[i + 1] == 'e') {
                ++ae;
                break;
            }
        }

        ++wc;
    }

    std::cout << ((ae / wc >= 0.4)
    ? "dae ae ju traeligt va"
    : "haer talar vi rikssvenska") << std::endl;
    return 0;
}
