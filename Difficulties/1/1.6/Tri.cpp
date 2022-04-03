#include <iostream>

void checkCalculation(int num1, int num2, int num3) {
    char sym1{}, sym2{};

    if (num1 + num2 == num3) {
        sym1 = '+';
        sym2 = '=';
    } else if (num1 - num2 == num3) {
        sym1 = '-';
        sym2 = '=';
    } else if (num1 * num2 == num3) {
        sym1 = '*';
        sym2 = '=';
    } else if (num1 / num2 == num3) {
        sym1 = '/';
        sym2 = '=';
    } else if (num1 == num2 + num3) {
        sym1 = '=';
        sym2 = '+';
    } else if (num1 == num2 - num3) {
        sym1 = '=';
        sym2 = '-';
    } else if (num1 == num2 * num3) {
        sym1 = '=';
        sym2 = '*';
    } else if (num1 == num2 / num3) {
        sym1 = '=';
        sym2 = '/';
    }

    std::cout << std::to_string(num1) << sym1 << std::to_string(num2)
        << sym2 << std::to_string(num3) << std::endl;
}

int main()
{
    int nums[3];
    std::cin >> nums[0] >> nums[1] >> nums[2];
    checkCalculation(nums[0], nums[1], nums[2]);

    return 0;
}
