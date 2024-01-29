#include <iostream>

int main(void) {
    long long n, a, b;

    std::cin >> n; 

    for (auto i = 0; i < n; i++) {
        std::cin >> a >> b;

        auto curr = b;
        while (true) {
            if (curr % a == 0) {
                for (auto i = a + 1; i < b; i++) {
                    if (curr % i == 0) goto fail;
                }
                break;
            }
fail:
            curr += b;
        }

        std::cout << curr << std::endl;
    }

}