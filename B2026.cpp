#include <iostream>

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        int a;
        std::cin >> a;
        if (a == 1 || a == 2) {
            std::cout << 1 << '\n';
            continue;
        }
        int f1 = 1, f2 = 1, f3 = 1;
        for (int i = 3; i <= a; i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        std::cout << f3 << '\n';
    }
    return 0;
}
