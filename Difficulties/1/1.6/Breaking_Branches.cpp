#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::string w(n % 2 == 0 ? "Alice" : "Bob");
    std::cout << w << std::endl;

    if (w == "Alice")
        std::cout << 1 << std::endl;

    return 0;
}
