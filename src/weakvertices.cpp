#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    while(n != -1){
        // TODO: use stack array when "internal compiler error: in expand_expr_real_1, at expr.c:9658" has been fixed.
        bool** verts = new bool*[n];

        for (unsigned int i(0); i < n; ++i)
            verts[i] = new bool[n];

        int num;
        for (unsigned int i = 0; i < n; ++i){
            for(unsigned int j = 0; j < n; ++j){
                std::cin >> num;
                verts[i][j] = num;
            }
        }

        for(unsigned int i(0); i < n;){
            [&] {
                for (unsigned int j(0); j < n; ++j) {
                    if (!verts[i][j])
                        continue;

                    for (unsigned int k(0); k < n; ++k) {
                        if (k != i && verts[j][k] && verts[k][i]) {
                            return;
                        }
                    }
                }

                std::cout << i << " ";
            }();

            ++i;
        }

        for (unsigned int i(0); i < n; ++i)
            delete[] verts[i];
        delete[] verts;

        std::cout << std::endl;
        std::cin >> n;
    }

    return 0;
}
