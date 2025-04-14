#include <iostream>

int func_queens_move() {
    int x1, y1, x2, y2;

    std::cout << "Enter first cell coordinates (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter second cell coordinates (x2 y2): ";
    std::cin >> x2 >> y2;

    int eqx = x2 - x1;
    int eqy = y2 - y1;

    std::cout << "Result: ";
    if (eqx == 0 || eqy == 0 || std::abs(eqx) == std::abs(eqy)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}