#include <iostream>
#include <string>

using namespace std;

string Join(string* tokens, int count, char delimiter) {
    string result = "";
    for (int i = 0; i < count; ++i) {
        if (i != 0) result += delimiter;
        result += tokens[i];
    }
    return result;
}

int func_join_string() {
    int n;
    char delimiter;

    cout << "Enter the number of strings to join: ";
    cin >> n;
    cin.ignore();

    string* strings = new string[n];
    cout << "Enter the strings, one per line:\n";
    for (int i = 0; i < n; ++i) {
        getline(cin, strings[i]);
    }

    cout << "Enter the delimiter character: ";
    cin >> delimiter;
    cin.ignore();

    string joinedString = Join(strings, n, delimiter);

    cout << "Joined string: " << joinedString << "\n";

    delete[] strings;

    return 0;
}

