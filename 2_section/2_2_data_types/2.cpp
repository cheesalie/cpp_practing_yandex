#include <iostream>

int func_arithm_progression() {
    long unsigned n;
    std::cout << "Enter the number of elements in arithmetic progression: ";
    std::cin >> n;

    long unsigned sum = n * (n + 1) / 2;
    std::cout << "Sum of arithmetic progression: " << sum << std::endl;

    return 0; 
}