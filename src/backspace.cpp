#include <iostream>

int main()
{
    char r[1000000];
    int current = 0;

    std::string input;
    std::cin >> input;

    for (const auto & c : input) {
        if (c == '<')
            --current;
        else
            r[current++] = c;
    }

    printf("%.*s\n", current, r);

    return 0;
}
