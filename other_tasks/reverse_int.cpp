#include <iostream>
#include <algorithm>

int func_reverse_int() {
    int n;

    std::cout << "Enter a four-digit integer: ";
    std::cin >> n;

    int a = n / 1000;
    int b = (n % 1000) / 100;
    int c = (n % 100) / 10;
    int d = n % 10;

    int reversed_n = d * 1000 + c * 100 + b * 10 + a;

    std::cout << "Reversed integer: " << reversed_n << std::endl;

    return 0;
}

