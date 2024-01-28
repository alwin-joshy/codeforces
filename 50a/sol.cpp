#include <iostream>
#include <vector>

int main(void) {
    int m, n;
    int tiles_placed = 0;

    std::cin >> m >> n;
    auto grid = std::vector<std::vector<bool>>(m, std::vector(n, false));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == true) continue;

            if (j != n - 1) {
                if (!grid[i][j + 1]) {
                    tiles_placed++;
                    grid[i][j] = true;
                    grid[i][j + 1] = true;
                    continue;
                }
            }

            if (i != m - 1) {
                if (!grid[i + 1][j]) {
                    tiles_placed++;
                    grid[i][j] = true;
                    grid[i + 1][j] = true;
                    continue;
                }
            }
        }
    }

    std::cout << tiles_placed << std::endl;
}