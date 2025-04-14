#include <iostream> 

int func_inch_to_scm() {
    double x;

    std::cout << "Enter value in centimeters: ";
    std::cin >> x;

    double inches = x / 2.54;
    std::cout << "Result in inches: " << inches << std::endl;
    
    return x;
}