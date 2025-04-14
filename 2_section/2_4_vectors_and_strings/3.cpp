#include <iostream>

using namespace std;

int func_guest_placement() {
    int n;

    cout << "Enter the number of guests: ";
    cin >> n;

    int* a = new int[n];
    int* b = new int[n];

    cout << "Enter the places taken by each guest (separated by spaces): ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        b[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        b[a[i] - 1] = i + 1;
    }

    cout << "Guest order: ";
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}
