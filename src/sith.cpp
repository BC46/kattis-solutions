#include <iostream>

using namespace std;

int main()
{
    int nums[3];
    string user;

    getline(cin, user);

    for (int &num : nums)
        cin >> num;

    int sub = nums[0] - nums[1];

    if (sub >= 0)
        cout << "VEIT EKKI\n";
    else if (sub == nums[2])
        cout << "JEDI\n";
    else
        cout << "SITH\n";

    return 0;
}
