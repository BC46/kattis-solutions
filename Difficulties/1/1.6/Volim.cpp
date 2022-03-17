#include <iostream>

int main()
{
    bool w{};
    char r;
    int k, n, t(0), it;
    std::cin >> k >> n;

   while (n--) {
       std::cin >> it >> r;
       t += it;

       if (w)
           continue;

       if (t >= 210) {
           w = true;
           std::cout << k << std::endl;
       }

       if (r == 'T') {
           if (++k == 9)
               k = 1;
       }
    }

    return 0;
}
