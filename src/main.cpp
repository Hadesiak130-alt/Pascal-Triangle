#include "lib/math.hpp"
#include <iostream>
#include <vector>

math M;

int main() {
    std::cout << "==== PASCAL TRIANGLE ====\n1\n1 1\n1 2 1\n. . .\n. . .\n. . .\n\nn = ";

    int n;
    std::cin >> n;

    std::cout << "\n";
    for (int num : M.pascal(n)) {
        std::cout << num << "  ";
    }
    std::cin.get();
    return 0;
}