#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    int n, k;
    std::string input;

    std::cin >> n >> k;
    std::getline(std::cin, input);

    auto scores = std::vector<int>(n, 0);
    for (auto i = 0; i < n; i++) {
        std::cin >> scores[i]; 
    }

    int threshold = scores[k - 1];

    auto pass = std::count_if(scores.begin(), scores.end(), [threshold](auto a) {
        return (a >= threshold && a > 0);
    });

    std::cout << pass << std::endl;

    return 0;
}