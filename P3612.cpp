#include <iostream>
#include <string>

int main() {
    std::string s;
    long long n;
    std::cin >> s >> n;
    long long len = s.length();
    while (len < n) {
        len *= 2;
    }
    while (len > s.length()) {
        long long half = len / 2;
        if (n > half) {
            n -= half;
            if (n == 1) {
                n = half;
            } else {
                n--;
            }
        }
        len = half;
    }
    std::cout << s[n - 1] << '\n';
    return 0;
}
