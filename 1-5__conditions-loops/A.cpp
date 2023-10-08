#include <iostream>
#include <cmath>

int v1, h1, v2, h2;

int main() {
    std::cin >> v1 >> h1 >> v2 >> h2;

    if
        (
            v1 == v2 ||
            h1 == h2 ||
            std::abs(v1 - v2) == std::abs(h1 - h2)
        ) 
        {
            std::cout << "YES" << std::endl;
    }
    else std::cout << "NO" << std::endl;
}