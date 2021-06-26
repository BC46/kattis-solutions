#include <iostream>

std::string reverseString(std::string str) {
    std::string new_str = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        new_str += str[i];
    }

    return new_str;
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::string a_reversed = reverseString(std::to_string(a));
    std::string b_reversed = reverseString(std::to_string(b));

    if (std::stoi(a_reversed) > std::stoi(b_reversed)) {
        std::cout << a_reversed << std::endl;
    } else {
        std::cout << b_reversed << std::endl;
    }
    
    return 0;
}
