#include <set>
#include <iostream>

int main()
{
    int n;
    int remaining_winners = 12;
    std::cin >> n;
    std::cin.ignore();

    std::set<std::string> universities;

    for (size_t i = 0; i < n; i++) {
        std::string line;
        std::getline(std::cin, line);

        int space_pos = line.find(' ');

        std::string university = line.substr(0, space_pos);
        std::string team = line.substr(space_pos + 1, line.length() - 1);

        if (universities.find(university) == universities.end() && remaining_winners > 0) {
            std::cout << university << " " << team << std::endl;
            universities.insert(university);
            remaining_winners--;
        }
    }

    return 0;
}
