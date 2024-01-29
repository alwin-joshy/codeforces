#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void) {
    int n;
    std::string bitstring;

    std::cin >> n;
    std::getline(std::cin, bitstring);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, bitstring);
        std::string bitstring_copy = bitstring;
        int n_coins = 0;

        for (int i = 0; i < bitstring.length(); i++) {
            auto query = (bitstring[i] == '0' ? '1' : '0');
            auto pos = bitstring_copy.find(query);
            if (pos != bitstring.npos) {
                bitstring_copy[pos] = 'X';
            } else {
                bitstring_copy[i] = 'D';
            }
        }

        std::cout << bitstring_copy;

        n_coins += std::count_if(bitstring_copy.begin(), bitstring_copy.end(), [](char c){ return c == 'D'; });

        std::cout << n_coins << std::endl;

    } 
}

/*
  0101110001
  0X01110001
*/