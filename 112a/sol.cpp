#include <iostream>
#include <algorithm>

int main(void) {
    std::string str1, str2;

    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    std::transform(str1.cbegin(), str1.cend(),
                   str1.begin(), // write to the same location
                   [](unsigned char c) { return std::toupper(c); });
    std::transform(str2.cbegin(), str2.cend(),
                str2.begin(), // write to the same location
                [](unsigned char c) { return std::toupper(c); });

    if (str1 < str2) {
        std::cout << "-1" << std::endl;
    } else if (str1 == str2) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << "1" << std::endl;
    }
}