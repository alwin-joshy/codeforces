#include <string>
#include <string_view>
#include <iostream>

int main(void) {
    std::string n;
    std::getline(std::cin, n);

    for (auto _ = std::stoi(n); _--;) {
        std::string len; 
        std::string s;
        std::getline(std::cin, len);

        auto num = 0;
        std::string prefix = "";      
        for (int i = 0; i < stoi(len); i++) {
            char c;
            std::cin >> c;

            if (std::string("map").compare(0, (prefix + c).size(), prefix + c) == 0 || std::string("pie").compare(0, (prefix + c).size(), prefix + c) == 0) {
                prefix += c;
            } else {
                prefix = c;
            }

            if (prefix == "map" || prefix == "pie") {
                num++;
                prefix = "";
            }
        }

        std::getline(std::cin, s);
        std::cout << num << std::endl;
    }
}