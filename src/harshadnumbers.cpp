#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    bool is_harshad = false;

    while (!is_harshad) {
        std::string number_string = std::to_string(number);

        int digit_sum = 0;

        for (char number_char : number_string) {
            digit_sum += number_char - '0';
        }

        if (number % digit_sum == 0) {
            is_harshad = true;
        } else {
            ++number;
        }
    }

    std::cout << number << std::endl;
    return 0;
}
