#include <iostream>

int main() {
    int T, n, k, i, j, val;
    std::cin >> T;
    while (T > 0) {
        int maximum = 0;
        std::cin >> n >> k;
        int max_val = 0;
        int a = 0, b = k - 1;

        for (a = n; a > 2; a--) {
            if (a == b)
                continue;
            if ((a & b) > max_val) {
                max_val = a & b;
            }
        }

        std::cout << max_val << std::endl;

        T--;
    }
    return 0;
}
