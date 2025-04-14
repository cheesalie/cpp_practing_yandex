#include <iostream>

int func_triangle(){
    int x, y, z;

    std::cout << "Enter lengths of three triangle sides (x y z): ";
    std::cin >> x >> y >> z;

    if (x + y <= z || x + z <= y || y + z <= x){
        std::cout << "Result: UNDEFINED" << std::endl;
        return 0;
    }

    int mult1 = x*x;
    int mult2 = y*y;
    int mult3 = z*z;
    std::cout << "Result: ";
    if (mult1 + mult2 == mult3 || mult1 + mult3 == mult2 || mult2 + mult3 == mult1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}