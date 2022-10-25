#include <iostream>

int main()
{
    int s, t, n;
    std::cin >> s >> t >> n;

    int total_time = 0;

    int *walk_times = new int [n + 1];
    int *bus_ride_times = new int [n];
    int *bus_time_intervals = new int [n];

    for (size_t i = 0; i < n + 1; i++) {
        std::cin >> walk_times[i];
    }

    for (size_t i = 0; i < n; i++) {
        std::cin >> bus_ride_times[i];
    }

    for (size_t i = 0; i < n; i++) {
        std::cin >> bus_time_intervals[i];
    }

    for (size_t i = 0; i < n; i++) {
        total_time += walk_times[i];
        if (total_time % bus_time_intervals[i] > 0)
            total_time += bus_time_intervals[i] - (total_time % bus_time_intervals[i]);
        total_time += bus_ride_times[i];
    }

    total_time += walk_times[n];

    std::cout << (total_time > (t - s) ? "no" : "yes") << std::endl;
    return 0;
}
