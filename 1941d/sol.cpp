#include <string>
#include <iostream>
#include <vector>
#include <algorithm>


inline int positive_modulo(int i, int n) {
    return (i % n + n) % n;
}

int main(void) {
    std::string n;
    std::getline(std::cin, n);

    for (int i = 0; i < stoi(n); i++) {
        int num_players;
        int num_throws;
        int init_player;
        std::string test;

        std::cin >> num_players >> num_throws >> init_player;
        std::getline(std::cin, test);

        init_player -= 1;
        auto prev = std::vector<bool>(num_players, false);
        auto curr = std::vector<bool>(num_players, false);
        prev[init_player] = true;

        for (int j = 0; j < num_throws; j++) {
            int distance;
            char direction;

            std::cin >> distance >> direction;

            for (int k = 0; k < num_players; k++) {
                if (prev[k]) {
                    if (direction == '0' || direction == '?') {
                        curr[positive_modulo(k + distance, num_players)] = true;
                    }

                    if (direction == '1' || direction == '?') {
                        curr[positive_modulo(k - distance, num_players)] = true;
                    }
                }
            }

            std::copy(curr.begin(), curr.end(), prev.begin());
            std::fill(curr.begin(), curr.end(), false);      
        }

        std::cout << std::count(prev.begin(), prev.end(), true) << std::endl;
        for (int j = 0; j < num_players; j++) {
            if (prev[j]) {
                std::cout << j + 1 << " ";
            }
        }
        std::cout << "\n";
    }
}