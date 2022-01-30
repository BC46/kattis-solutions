#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    int sessions(0);

    for (unsigned int i = 0; i < n; i++) {
        std::string color;
        std::cin >> color;
        transform(color.begin(), color.end(), color.begin(), [](unsigned char c){ return std::tolower(c); });

        if (color.find("pink") != std::string::npos || color.find("rose") != std::string::npos)
            ++sessions;
    }

    std::cout << (sessions == 0 ? "I must watch Star Wars with my daughter" : std::to_string(sessions)) << std::endl;
    return 0;
}
