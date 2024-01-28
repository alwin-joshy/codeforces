#include <iostream>

int main(void) {
    int n = 0;
    std::string input;

    std::getline(std::cin, input);
    n = stoi(input);

    for (auto i = 0; i < n; i++) {
        std::getline(std::cin, input);

        if (input.length() <= 10) {
            std::cout << input << std::endl;
            continue;
        }

        std::cout << input[0] << input.length() - 2 << input[input.length() - 1] << std::endl;
    }
}