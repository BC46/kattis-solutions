#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++) {
        int foreigners = 0;
        int input = 1;

        while (true) {
            int new_input;
            std::cin >> new_input;

            if (new_input == 0) {
                break;
            }

            if (new_input > input * 2) {
                foreigners += new_input - input * 2;
            }

            input = new_input;
        }

        std::cout << foreigners << std::endl;
    }

    return 0;
}
