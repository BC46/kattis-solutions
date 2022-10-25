#include <iostream>

int get_digit_sum(int num) {
    std::string string_num = std::to_string(num);
    int digit_sum = 0;

    for (char character : string_num) {
        digit_sum += (character - '0');
    }

    return digit_sum;
}

int main()
{
    int l, d, x;
    std::cin >> l >> d >> x;

    int n, m;

    for (size_t i = l; i <= d; i++) {
        int digit_sum = get_digit_sum(i);

        if (digit_sum == x) {
            n = i;
            break;
        }
    }

    for (size_t i = d; i >= l; --i) {
        int digit_sum = get_digit_sum(i);

        if (digit_sum == x) {
            m = i;
            break;
        }
    }

    std::cout << n << std::endl << m << std::endl;
    return 0;
}
