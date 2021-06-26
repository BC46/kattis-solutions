#include <iostream>

int main()
{
    int x, y, n;
    std::cin >> x >> y >> n;

    for (size_t i = 1; i <= n; i++) {
        std::string output = "";

        if (i % x == 0)
            output += "Fizz";
        if (i % y == 0)
            output += "Buzz";
        if (output == "")
            output = std::to_string(i);

        std::cout << output << std::endl;
    }

    return 0;
}
