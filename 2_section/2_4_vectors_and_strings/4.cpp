#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int func_reverse_sort() {
    string* lines = nullptr;
    int capacity = 1;
    int size = 0;
    string line;

    cout << "Enter lines of text (press Ctrl+D to finish):\n";
    while (getline(cin, line)) {
        if (size == capacity) {
            capacity *= 2;
            string* temp = new string[capacity];
            for (int i = 0; i < size; ++i) {
                temp[i] = lines[i];
            }
            delete[] lines;
            lines = temp;
        }
        lines[size] = line;
        size++;
    }

    sort(lines, lines + size, greater<string>());

    cout << "Sorted lines in reverse order:\n";
    for (int i = 0; i < size; ++i) {
        cout << lines[i] << endl;
    }

    delete[] lines;

    return 0;
}

