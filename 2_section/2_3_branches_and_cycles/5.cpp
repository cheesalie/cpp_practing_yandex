#include <iostream>
#include <iomanip>

int func_printing_calendar() {
    int startDay, numDays;

    std::cout << "Enter the starting weekday (1-7, where 1=Sun, 7=Sat): ";
    std::cin >> startDay;

    std::cout << "Enter number of days in month: ";
    std::cin >> numDays;

    std::cout << "Calendar:" << std::endl;

    int dayOfWeek = startDay;

    for (int i = 1; i < startDay; ++i) {
        std::cout << "   ";
    }

    for (int day = 1; day <= numDays; ++day) {
        std::cout << std::setw(2) << day;
        if (day < numDays) std::cout << " ";

        dayOfWeek++;

        if (dayOfWeek > 7) {
            std::cout << std::endl;
            dayOfWeek = 1;
        }
    }

    std::cout << std::endl;

    return 0;
}