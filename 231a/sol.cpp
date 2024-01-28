#include <iostream>

int main(void) {
    int n = 0;
    int sum = 0;
    std::string input;

    std::getline(std::cin, input);
    n = stoi(input);

    for (auto i = 0; i < n; i++) {
        std::getline(std::cin, input);

        auto consensus = input[0] - '0' + input[2] - '0' + input[4] - '0';
        if (consensus >= 2) {
            sum++;
        }
    }

    std::cout << sum << std::endl;
}