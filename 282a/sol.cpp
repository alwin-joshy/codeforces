#include <string>
#include <iostream>

int main(void) {
    int n;
    std::string input;

    std::getline(std::cin, input);
    n = stoi(input);

    int x = 0;

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, input);

        if (input == "X++" || input == "++X") {
            x++;
        } else {
            x--;
        }
    }

    std::cout << x << std::endl;
}