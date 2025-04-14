#include <iostream>
#include <limits>
#include <string>

//2_1
void func_out();               // Информация о C++
void func_sum();               // Сумма двух чисел
//2_2
void func_inch_to_scm();       // Конвертация дюймов в сантиметры
void func_arithm_progression();// Арифметическая прогрессия
//2_3
void func_queens_move();       // Ход ферзя в шахматах
void func_triangle();          // Проверка, является ли треугольник прямоугольным
void func_leap_year();          // Проверка, является ли год високосным
void func_days_in_a_month();   // Количество дней в месяце
void func_printing_calendar(); // Печать календаря
void func_sum_of_digits();     // Сумма цифр
void func_ln();                // Натуральный логарифм
//2_4
void func_password_check();    // Проверка пароля
void func_guest_placement();   // Размещение гостей
void func_reverse_sort();      // Сортировка в обратном порядке
void func_palindrome_check();  // Проверка, является ли строка палиндромом
void func_minesweeper();       // Игра "Сапер"
//2_7
void func_matrix_arg_max();    // Аргумент максимума в матрице (индекс максимального элемента)
void func_common_prefix();     // Общий префикс
void func_split_string();      // Разделить строку
void func_join_string();       // Объединить строку
void func_transpose_matrix();  // Транспонировать матрицу
void func_sort_points();       // Сортировка точек
//other
void func_reverse_int();       // Перевернуть целое число
void func_arithm_mean();

struct FunctionInfo {
    std::string name;
    void (*func)();
};

const FunctionInfo functions[] = {
    {"Exit", nullptr},  // 0 - выход
    {"Info about C++", func_out},
    {"Sum of two numbers", func_sum},
    {"Convert inches to cm", func_inch_to_scm},
    {"Arithmetic progression", func_arithm_progression},
    {"Queen's move in chess", func_queens_move},
    {"Check right-angled triangle", func_triangle},
    {"Check leap year", func_leap_year},
    {"Days in a month", func_days_in_a_month},
    {"Print calendar", func_printing_calendar},
    {"Sum of digits", func_sum_of_digits},
    {"Natural logarithm", func_ln},
    {"Password validation", func_password_check},
    {"Guest placement", func_guest_placement},
    {"Check palindrome", func_palindrome_check},
    {"Minesweeper", func_minesweeper},
    {"Reverse int", func_reverse_int},
    {"Matrix arg max", func_matrix_arg_max},
    {"Common prefix", func_common_prefix},
    {"Split string", func_split_string},
    {"Join string", func_join_string},
    {"Transpose matrix", func_transpose_matrix},
    {"Sort points", func_sort_points},
    {"Arithmetic Mean", func_arithm_mean}
};


const int FUNC_COUNT = sizeof(functions) / sizeof(functions[0]);

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int displayMenu() {
    int choice;
    while (true) {
        std::cout << "\n===== Function Menu =====\n";
        for (int i = 1; i < FUNC_COUNT; ++i) {
            std::cout << i << ". " << functions[i].name << "\n";
        }
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        if (std::cin.fail() || choice < 0 || choice >= FUNC_COUNT) {
            std::cout << "Invalid input! Please enter a number between 0 and " << FUNC_COUNT - 1 << ".\n";
            clearInputBuffer();
        } else {
            clearInputBuffer();
            return choice;
        }
    }
}

int main() {
    int choice;
    do {
        choice = displayMenu();
        if (choice != 0 && functions[choice].func) {
            functions[choice].func();  
        }
    } while (choice != 0);

    std::cout << "Exiting...\n";
    return 0;
}