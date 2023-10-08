#include <iostream>
#include <cmath>

int a, b, c;

int main() {
    std::cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (
            std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2) ||
            std::pow(a, 2) + std::pow(c, 2) == std::pow(b, 2) ||
            std::pow(b, 2) + std::pow(c, 2) == std::pow(a, 2)
        ) {
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
    } else {
        std::cout << "UNDEFINED";
    }
}