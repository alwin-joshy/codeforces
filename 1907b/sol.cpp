#include <iostream>
#include <algorithm>
#include <iterator>

int main(void) {

    std::string n;
    std::getline(std::cin, n);

    for (int i = 0; i < stoi(n); i++) {
        std::string line;
        char c;

        std::getline(std::cin, line);
        auto it = line.begin();
        while (it != line.end() ){
            std::cout << "before: " << line << "\n";
            if (*it == 'b') {
                auto pos = std::find_if(make_reverse_iterator(it - 1), line.rend(), islower);
                if (pos != line.rend()) {

                    line.erase((pos + 1).base());
                    --it;
                }
                it = line.erase(it);
            } else if (*it == 'B') {
                auto pos = std::find_if(make_reverse_iterator(it - 1), line.rend(), isupper);
                if (pos != line.rend()) {
                    line.erase((pos + 1).base());
                    --it;
                }
                it = line.erase(it);
            } else {
                it++;
            }
            std::cout << "after:  " << line << "\n";

            // std::cout << std::distance(line.begin(), it) << line << std::endl;
        }

        std::cout << line << std::endl;
    }

}