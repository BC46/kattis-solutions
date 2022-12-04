#include <iostream>

using namespace std;

int main()
{
    string line, s;
    getline(cin, line);

    s = line.substr(line.length() - 3);

    std::cout << (s == "eh?" ? "Canadian!" : "Imposter!") << std::endl;
    return 0;
}
