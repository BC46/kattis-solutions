#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<char> queue;
    string input;
    int x, diff = 0, total = 0, current;

    cin >> x >> input;

    for (const auto &c : input)
        queue.emplace_back(c);

    while (!queue.empty()) {
        current = queue.front() == 'M' ? 1 : -1;

        if (abs(diff + current) <= x) {
            ++total;
            diff += current;

            queue.pop_front();
        } else if (queue.size() >= 2) {
            auto second = next(queue.begin());

            current = *second == 'M' ? 1 : -1;

            if (abs(diff + current) <= x) {
                ++total;
                diff += current;

                queue.erase(second);
            } else
                break;
        } else
            break;
    }

    cout << total << '\n';
    return 0;
}
