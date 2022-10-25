#include <ctime>
#include <iostream>

int main()
{
    int d, m;
    std::cin >> d >> m;

    std::tm time{};
    time.tm_year = 2009 - 1900;
    time.tm_mon = m-1;
    time.tm_mday = d;
    time.tm_hour = 0;
    time.tm_min = 0;
    time.tm_isdst = 0;
    std::time_t t = std::mktime(&time);
    std::tm * local = std::localtime(&t);

    switch (local->tm_wday) {
        case 0:
            std::cout << "Sunday";
            break;
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
    }

    return 0;
}
