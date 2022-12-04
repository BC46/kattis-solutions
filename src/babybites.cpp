#include <iostream>

using namespace std;

int main()
{
    bool fishy{};

    int n, input;
    string inputString;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cin >> inputString;

        if (inputString != "mumble") {
            input = stoi(inputString);

            if (!fishy && input != i)
                fishy = true;
        }
    }

    cout << (fishy ? "something is fishy" : "makes sense") << std::endl;
    return 0;
}
