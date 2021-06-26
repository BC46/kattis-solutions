#include <iostream>

int main()
{
    std::string month;
    int day;
    std::cin >> month >> day;

    bool is_halloween = (month == "OCT" && day == 31) || (month == "DEC" && day == 25);

    std::cout << (is_halloween ? "yup" : "nope");
    return 0;
}
