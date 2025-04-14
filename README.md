# C++ Practice Tasks  
**IDE:** Dev-C++  
**Файл проекта:** `study_tasks.dev`  
**Исполняемый файл:** `study_tasks.exe`  

## 📌 Overview  
В этом репозитории содержатся решения задач из Хендбука *"Основы C++"* (Яндекс Образование). Задания сгруппированы по разделам (пр., `2_section`, `3_section`) и включают дополнительные упражнения в разделе `other_tasks/`.  

Все сообщения, адресованные пользователю, написаны на **Английском**.  

---

## 🛠️ Структура проекта 
```
study_tasks/  
├── 2_section/            			# Задачи из 2 раздела
│   ├── 2_1_first_steps/      		# Базовые задачи
│   ├── 2_2_data_types/       		# Типы данных
│   ├── 2_3_branches_and_cycles/  	# Условия и циклы
│   ├── 2_4_vectors_and_strings/  	# Векторы и строки
│   └── 2_7_functions/        		# Функции
├── 3_section/            			# Задачи из 3 раздела  
├── other_tasks/          			# Дополнительные задания  
├── main_run.cpp          			# Главное меню  
├── study_tasks.dev       			# Файл проекта  
└── study_tasks.exe       			# Исполняемый файл
```

---

## 🚀 Запуск
1. **Via IDE:**  
   - Откройте `study_tasks.dev` в Dev-C++.  
   - Скомпилировать & Выполнить (`F9`).  

2. **С помощью исполняемого файла:**  
   - Дважды щелкните `study_tasks.exe` (Windows).  
   - Выберите задачу из интерактивного меню.  

---

## 📋 Список выполненных задач (вызывается через `main_run.cpp`)

| #  | Название функции               | Описание                                                                 |
|----|--------------------------------|--------------------------------------------------------------------------|
| 1  | `func_out()`                   | Выводит основную информацию о C++                                        |
| 2  | `func_sum()`                   | Считывает 2 числа и возвращает их сумму                                  |
| 3  | `func_inch_to_scm()`           | Конвертирует дюймы в сантиметры                                          |
| 4  | `func_arithm_progression()`    | Вычисляет арифметическую прогрессию                                      |
| 5  | `func_queens_move()`           | Проверяет, может ли ферзь перейти с одной шахматной клетки на другую     |
| 6  | `func_triangle()`              | Проверяет, является ли треугольник прямоугольным                         |
| 7  | `func_leap_year()`             | Определяет, является ли год високосным                                   |
| 8  | `func_days_in_a_month()`       | Вычисляет количество дней в указанном месяце                             |
| 9  | `func_printing_calendar()`     | Выводит календарь для указанного месяца и года                           |
| 10 | `func_sum_of_digits()`         | Вычисляет сумму цифр введенного числа                                    |
| 11 | `func_ln()`                    | Вычисляет значение натурального логарифма                                |
| 12 | `func_password_check()`        | Проверяет, удовлетворяет ли пароль заданным требованиям безопасности     |
| 13 | `func_guest_placement()`       | Вычисляет обратную перестановку для расстановки гостей                   |
| 14 | `func_palindrome_check()`      | Проверяет, является ли строка палиндромом                                |
| 15 | `func_minesweeper()`           | Реализует логику игры "Сапер" (мини-версия)                              |


---

## � Troubleshooting  
- **В меню включена проверка ввода для предотвращения сбоев.**  

---



//#include <iostream>
//#include <vector>
//#include <utility>
//
//std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& m) {
//    auto pos = std::pair{0, 0};
//    for (size_t i = 0; i < m.size(); ++i)
//        for (size_t j = 0; j < m[i].size(); ++j)
//            if (m[i][j] > m[pos.first][pos.second])
//                pos = {i, j};
//    return pos;
//}
//
//int func_matrix_arg_max() {
//  int rows, cols;
//
//  std::cout << "Enter the number of rows: ";
//  std::cin >> rows;
//
//  std::cout << "Enter the number of columns: ";
//  std::cin >> cols;
//
//  std::cout << "Enter the matrix elements row by row:\n";
//  std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
//  for (int i = 0; i < rows; ++i) {
//    for (int j = 0; j < cols; ++j) {
//      std::cout << "Element [" << i << "][" << j << "]: ";
//      std::cin >> matrix[i][j];
//    }
//  }
//  
//  std::pair<size_t, size_t> max_pos = MatrixArgMax(matrix);
//
//  std::cout << "Position of the largest element: (" << max_pos.first << ", " << max_pos.second << ")\n";
//  return 0;
//}




void func_out();                // Выводит информацию о C++
void func_sum();                // Считывает 2 числа и возвращает их сумму
void func_inch_to_scm();        // Перевод см в дюймы
void func_arithm_progression(); // Арифметическая прогрессия
void func_queens_move();        // Может ли ходить ферзь из первой клетки во вторую
void func_triangle();           // Является ли треугольник прямоугольным
void func_leap_year();          // Является ли год високосным
void func_days_in_a_month();    // Количество дней в месяце
void func_printing_calendar();  // Печать календаря
void func_sum_of_digits();      // Сумма цифр
void func_ln();                 // Значение натурального логарифма
void func_password_check();     // Удовлетворяет ли требованиям пароль
void func_guest_placement();    // Вычислить обратную перестановку
void func_palindrome_check();   // Проверка на палиндром
void func_minesweeper();        // Сапер
void func_matrix_arg_max();     // ArgMax в матрице
void func_common_prefix();      // Общий префикс
void func_split_string();       // Функция Split
void func_join_string();        // Функция Join
void func_transpose_matrix();   // Транспонировать матрицу
void func_sort_points();        // Сортировка точек
void func_reverse_int();        // Вывести число в обратном порядке