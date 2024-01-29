#include <iostream>
#include <set>
#include <vector>
#include <stack>
#include <algorithm>

int main(void) {
    int n;

    auto vowels = std::set{'a', 'e'};
    auto cons = std::set{'b', 'c', 'd'};
    
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int len;
        std::string s;
        auto tokens = std::stack<std::string>();

        std::cin >> len;
        std::getline(std::cin, s);
        std::getline(std::cin, s);

        int j = s.length() - 1;
        while (j >= 0) {
            if (vowels.find(s[j]) != vowels.end()) {
                tokens.push(s.substr(j - 1, 2));
                j -= 2;
            } else {
                tokens.push(s.substr(j - 2, 3));
                j -= 3;
            }
        }

        do {
            std::cout << tokens.top();
            tokens.pop();
            if (tokens.empty()) {
                break;
            }
            std::cout << '.';
        } while (true);

        std::cout << std::endl;

    }
}