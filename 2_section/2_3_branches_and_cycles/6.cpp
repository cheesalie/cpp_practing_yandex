#include <iostream>

int func_sum_of_digits() {
    long long n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}