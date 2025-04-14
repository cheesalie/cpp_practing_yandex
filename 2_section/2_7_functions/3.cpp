#include <iostream>
#include <string>

using namespace std;

struct StringArray {
    string* data;
    int size;
    int capacity;

    StringArray() : data(nullptr), size(0), capacity(0) {}
    ~StringArray() {
        delete[] data; 
    }

    void push_back(const string& str) {
        if (size == capacity) {
            int newCapacity = (capacity == 0) ? 1 : capacity * 2;
            string* newData = new string[newCapacity];

            for (int i = 0; i < size; ++i) {
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;
            capacity = newCapacity;
        }

        data[size] = str;
        size++;
    }
};

StringArray Split(const string& s, char d) {
    StringArray r;
    size_t start = 0;

    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == d) {
            r.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }

    return r;
}

int func_split_string() {
    string inputString;
    char delimiter;

    cout << "Enter the string to split: ";
    getline(cin, inputString);

    cout << "Enter the delimiter character: ";
    cin >> delimiter;
    cin.ignore();

    StringArray parts = Split(inputString, delimiter);

    cout << "Split parts:\n";
    for (int i = 0; i < parts.size; ++i) {
        cout << parts.data[i] << "\n";
    }

    return 0;
}

