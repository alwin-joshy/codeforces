#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int main(void) {
    std::string input;
    auto arr = std::vector<int>();

    std::getline(std::cin, input);
    for (int i = 0; i < input.length(); i += 2) {
        arr.push_back(input[i] - '0');
    }

    std::sort(arr.begin(), arr.end());
    std::cout << std::accumulate(arr.begin(), arr.end(), std::string(""), [](auto a, auto b) {
        return a + "+" + std::to_string(b);
    }).substr(1) << std::endl;
}