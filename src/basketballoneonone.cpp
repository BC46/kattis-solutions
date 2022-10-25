#include <iostream>

int main()
{
    int a(0), b(0), p;
    std::string input;

    std::cin >> input;

    for (int i(0); i < input.length(); i += 2) {
        p = input[i + 1] - '0';

        if (input[i] == 'A')
            a += p;
        else if (input[i] == 'B')
            b += p;
    }

    std::cout << (a > b ? "A" : "B") << std::endl;

    return 0;
}
