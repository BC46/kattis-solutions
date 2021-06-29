#include <iostream>

int main()
{
    int stone_amount;
    std::cin >> stone_amount;

    std::cout << (stone_amount % 2 == 0 ? "Bob" : "Alice");

    return 0;
}
