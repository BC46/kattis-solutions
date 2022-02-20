#include <iostream>

int main()
{
    int n, courses, studyYear, birthYear;
    std::string name, studyDate, birthDate;

    std::cin >> n;

    while (n--) {
        std::string result;

        std::cin >> name >> studyDate >> birthDate >> courses;
        studyYear = std::stoi(studyDate.substr(0, 4));
        birthYear = std::stoi(birthDate.substr(0, 4));

        if (studyYear >= 2010 || birthYear >= 1991)
            result = "eligible";
        else if (courses >= 41)
            result = "ineligible";
        else
            result = "coach petitions";

        std::cout << name << " " << result << std::endl;
    }

    return 0;
}
