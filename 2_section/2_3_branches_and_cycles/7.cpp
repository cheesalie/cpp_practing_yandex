#include <iostream>
#include <iomanip>

int func_ln() {
    int n;
    
    std::cout << "Enter number of series terms: ";
    std::cin >> n;
    
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += (double)((i % 2 == 1) ? 1 : -1) / i;
    }
    
    std::cout << "Result: " << std::fixed << std::setprecision(6) << sum << std::endl;
    
    return 0;
}