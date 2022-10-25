#include <iostream>
#include <set>

int main()
{
    std::set<int> numbers;

    for (size_t i = 0; i < 10; i++) {
        int n;
        std::cin >> n;

        numbers.insert(n % 42);
    }

    std::cout << numbers.size() << std::endl;
    return 0;
}
