#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int val;
            std::cin >> val;
            if (val) goto done; 
        }
    }

done:
    std::cout << std::abs(i - 2) + std::abs(j - 2) << std::endl;
}