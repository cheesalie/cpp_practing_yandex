#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string CommonPrefix(string* words, int n) {
    if (n == 0) {
        return "";
    }

    if (n == 1) {
        return words[0];
    }

    string prefix = words[0];
    for (int i = 1; i < n; ++i) {
        string current_word = words[i];
        size_t len = min(prefix.length(), current_word.length());
        string new_prefix = "";
        for (size_t j = 0; j < len; ++j) {
            if (prefix[j] == current_word[j]) {
                new_prefix += prefix[j];
            } else {
                break;
            }
        }
        prefix = new_prefix;
    }

    return prefix;
}

int func_common_prefix() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    cin.ignore(); // Consume the newline character

    string* words = new string[n];
    cout << "Enter the words, one per line:\n";
    for (int i = 0; i < n; ++i) {
        getline(cin, words[i]);
    }

    string prefix = CommonPrefix(words, n);
    cout << "Common prefix: " << prefix << "\n";

    delete[] words; // Deallocate the memory

    return 0;
}

