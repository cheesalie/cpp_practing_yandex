#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int func_palindrome_check() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    cout << "Result: ";
    if (s == reversed_s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
