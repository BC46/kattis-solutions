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
        bool smileFound {true};

        for (unsigned int j(0); j < smiles.size(); ++j) {
            if (smiles[j].length() - 1 + i > input.length() - 1)
                break;

            for (unsigned int k(0); k < smiles[j].length(); ++j) {
                if (smiles[j][k] != input[j + k]) {
                    smileFound = false;
                    break;
                }
            }

            if (smileFound)
                std::cout << i << std::endl;
        }
    }

    return 0;
}
