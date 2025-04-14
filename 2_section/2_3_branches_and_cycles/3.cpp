#include <iostream>

int func_leap_year(){
    int x;

    std::cout << "Enter year: ";
    std::cin >> x;

    std::cout << "Result: ";
    if (x % 400 == 0){
        std::cout << "YES" << std::endl;
    } else if (x % 100 == 0) {
        std::cout << "NO" << std::endl;
    } else if (x % 4 == 0){
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0; 
}