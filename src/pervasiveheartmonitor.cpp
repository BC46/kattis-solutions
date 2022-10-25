#include <iostream>
#include <vector>

bool is_real(const std::string &str) {
    for (const auto &c : str) {
        if (!(isdigit(c) || c == '.'))
            return false;
    }

    return true;
}

int main()
{
    std::string line;
    unsigned int split;

    while (std::getline(std::cin, line)) {
        std::vector<float> heartbeats;
        std::string name;

        while (line.length() > 0) {
            split = line.find(' ');

            std::string entry(split == std::string::npos ? line : line.substr(0, split));

            if (is_real(entry))
                heartbeats.push_back(std::stof(entry));
            else
                name += entry + " ";

            line = split == std::string::npos ? "" : line.substr(split + 1);
        }

        float avg(0);

        for (const auto &entry : heartbeats)
            avg += entry;

        avg = heartbeats.empty() ? 0 : avg / static_cast<float>(heartbeats.size());

        std::cout << avg << " " << name << std::endl;
    }

    return 0;
}
