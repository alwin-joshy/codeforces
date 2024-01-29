#include <iostream>
#include <vector>

int main(void) {
    int n_cases;
    std::string input;

    std::cin >> n_cases;
    std::getline(std::cin, input);

    for (auto i = 0; i < n_cases; i++) {
        long long n, f, a, b;
        bool success = true;

        std::cin >> n >> f >> a >> b;
        auto message_times = std::vector<long long>(n, 0);
        
        for (int i = 0; i < n; i++) {
            std::cin >> message_times[i];
        }

        int curr_time = 0;
        for (auto message : message_times) {
            long long sleep_cost = b;
            long long idle_cost = (message - curr_time) * a;

            long long optimal_cost = std::min(sleep_cost, idle_cost);
            f -= optimal_cost;
            if (f <= 0) {
                success = false;
                break;
            }
            curr_time = message;
        }

        std::cout << (success ? "YES" : "NO") << std::endl;
    }

}