#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vowels{ 'A', 'E', 'I', 'O', 'U' };

    char i;
    cin >> i;

    if (i == 'Y')
        cout << "Kannski\n";
    else if (find(vowels.begin(), vowels.end(), i) != vowels.end())
        cout << "Jebb\n";
    else
        cout << "Neibb\n";

    return 0;
}
