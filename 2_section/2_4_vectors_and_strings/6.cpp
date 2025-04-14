#include <iostream>

using namespace std;

int func_minesweeper() {
    int m, n, k;
    cout << "Enter the dimensions of the field (m n) and the number of mines (k): ";
    cin >> m >> n >> k;

    char** field = new char*[m];
    for (int i = 0; i < m; ++i) {
        field[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            field[i][j] = '0';
        }
    }

    cout << "Enter the coordinates of the mines (x y):\n";
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        field[x - 1][y - 1] = '*';
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (field[i][j] != '*') {
                int count = 0;
                for (int di = -1; di <= 1; ++di) {
                    for (int dj = -1; dj <= 1; ++dj) {
                        if (di == 0 && dj == 0) continue;
                        int ni = i + di;
                        int nj = j + dj;
                        if (ni >= 0 && ni < m && nj >= 0 && nj < n && field[ni][nj] == '*') {
                            ++count;
                        }
                    }
                }
                if (count > 0) {
                    field[i][j] = '0' + count;
                }
            }
        }
    }

    cout << "Field output:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << field[i][j];
            if (j < n - 1) cout << " ";
        }
        if (i < m - 1) cout << "\n";
    }

    for (int i = 0; i < m; ++i) {
        delete[] field[i];
    }
    delete[] field;

    return 0;
}

