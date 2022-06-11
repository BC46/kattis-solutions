#include <iostream>
#include <string>

int getNum(std::string input) {
    std::string numStr;
    for (int i(0); i < input.length(); i += 2) {
        numStr += input[i];
    }

    return stoi(numStr);
}

int main()
{
    int t;
    std::string i, i2;

    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::getline(std::cin , i);
        std::getline(std::cin, i2);

        int num(getNum(i));
        int num2(getNum(i2));
        std::string result = std::to_string(num + num2);

        for (const auto& ri : result) {
            std::cout << ri << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
