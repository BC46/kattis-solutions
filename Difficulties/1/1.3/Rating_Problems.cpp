#include <iostream>

int main()
{
    int sum = 0;

    float n, k;
    std::cin >> n >> k;

    for (size_t i = 0; i < k; i++) {
        int rating;
        std::cin >> rating;

        sum += rating;
    }

    float min_rating = (sum - 3 * (n - k)) / n;
    float max_rating = (sum + 3 * (n - k)) / n;

    std::cout << min_rating << " " << max_rating;
    return 0;
}
