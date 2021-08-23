#include <iostream>
#include <bitset>

int main()
{
    int n;
    std::cin >> n;

    std::bitset<32> binary(n);
    std::string binary_string = binary.to_string();
    std::string binary_string_trim = binary_string.substr(binary_string.find('1'), binary_string.length());

    std::string reversed_binary_string = "";

    for (size_t i = binary_string_trim.length(); i --> 0;) {
        reversed_binary_string += binary_string_trim[i];
    }

    std::bitset<32> reversed_binary(reversed_binary_string);

    std::cout << reversed_binary.to_ulong() << std::endl;
    return 0;
}
