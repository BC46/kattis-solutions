#include <iostream>

int main()
{
    int a, b, c, d, e, grade;
    std::cin >> a >> b >> c >> d >> e >> grade;

    std::string result("F");

    if (grade >= a) {
        result = "A";
    } else if (grade >= b) {
        result = "B";
    } else if (grade >= c) {
        result = "C";
    } else if (grade >= d) {
        result = "D";
    } else if (grade >= e) {
        result = "E";
    }

    std::cout << result << std::endl;
    return 0;
}
