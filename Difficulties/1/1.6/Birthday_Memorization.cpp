#include <iostream>
#include <map>

struct Friend {
    std::string s;
    int c;
};

int main()
{
    std::map<std::string, Friend> friends;

    std::string s, birthday;
    int n, c;
    std::cin >> n;

    while (n--) {
        std::cin >> s >> c >> birthday;

        if (friends.find(birthday) == friends.end() || c > friends[birthday].c) {
            friends[birthday] = Friend { s, c };
        }
    }

    std::cout << friends.count() << std::endl;

    for (const auto &key : friends) {
        std::cout << friends.find(key.first)->s << std::endl;
    }

    return 0;
}
