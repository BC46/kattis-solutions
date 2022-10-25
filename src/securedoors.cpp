#include <iostream>
#include <map>

int main()
{
    int n;
    std::string action, name;
    std::map<std::string, bool> p;

    std::cin >> n;
    while (n--) {
        std::cin >> action >> name;

        if (action == "entry") {
            std::cout << name << " entered";

            if (p.find(name) != p.end() && p[name])
                std::cout << " (ANOMALY)";

            std::cout << std::endl;

            p[name] = true;
        } else if (action == "exit") {
            std::cout << name << " exited";

            if (p.find(name) == p.end() || !p[name])
                std::cout << " (ANOMALY)";

            std::cout << std::endl;

            p[name] = false;
        }
    }

    return 0;
}
