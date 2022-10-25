#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> smiles {
        ":)", ";)", ":-)", ";-)"
    };

    std::string input;
    std::cin >> input;

    for (unsigned int i(0); i < input.length(); ++i) {
        bool smileFound{true};

        for (auto & smile : smiles) {
            if (smile.length() - 1 + i > input.length() - 1)
                break;

            for (unsigned int k(0); k < smile.length(); ++k) {
                if (smile[k] == input[i + k]) {
                    smileFound = true;
                } else {
                    smileFound = false;
                    break;
                }
            }

            if (smileFound) {
                std::cout << i << std::endl;
                break;
            }
        }
    }

    return 0;
}
