#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    int index;
    int personsBetween;
};

int main()
{
    std::vector<Person> persons;
    int n, personsBetween;
    std::cin >> n;

    for (int i(2); i <= n; ++i) {
        std::cin >> personsBetween;
        persons.push_back(Person {i, personsBetween});
    }

    std::sort(persons.begin(), persons.end(), [](const Person &a, const Person &b)
        -> bool { return a.personsBetween < b.personsBetween; });

    std::cout << "1 ";
    for (const auto person : persons) {
        std::cout << person.index << " ";
    }

    return 0;
}
