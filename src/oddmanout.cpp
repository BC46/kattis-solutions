#include <iostream>
#include <map>

int main()
{
    int n;
    std::cin >> n;

    int newGuest;
    for (int i(1); i <= n; ++i) {
        std::map<int, int> guests;
        int gN;
        std::cin >> gN;

        while (gN--) {
            std::cin >> newGuest;

            if (guests.find(newGuest) == guests.end()) {
                guests.insert(std::pair<int, int>(newGuest, 1));
            } else {
                guests[newGuest]++;
            }
        }

        for (const auto& kv : guests) {
            if (kv.second < 2) {
                std::cout << "Case #" << i << ": " << kv.first << std::endl;
                break;
            }
        }
    }

    return 0;
}
