#include <iostream>

int func_days_in_a_month() {
    int month;
    int year;

    std::cout << "Enter month number (1-12): ";
    std::cin >> month;

    std::cout << "Enter 4-digit year: ";
    std::cin >> year;

    std::cout << "Number of days: ";

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            std::cout << 29 << std::endl;
        } else {
            std::cout << 28 << std::endl;
        }
    } else if (month==4 || month==6 || month==9 || month == 11){
        std::cout << 30 << std::endl;
    } else {
        std::cout << 31 << std::endl;
    }
    return 0;
}