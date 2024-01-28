#include <iostream>

int main(void) {
    int weight;

    std::cin >> weight;

    for (int i = 2; i < weight; i += 2) {
        for (int j = 2; j <= weight / 2; j += 2) {
            if (i + j == weight) {
                std::cout << "yes\n";
                return 0;
            }
        }
    }

    std::cout << "no\n";
}