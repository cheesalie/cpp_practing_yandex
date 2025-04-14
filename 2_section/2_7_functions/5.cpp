#include <iostream>

using namespace std;

int** allocateMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

void deallocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int** Transpose(int** matrix, int rows, int cols, int& newRows, int& newCols) {
    newRows = cols;
    newCols = rows;

    int** transposed = allocateMatrix(newRows, newCols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

int func_transpose_matrix() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;
    cin.ignore();

    cout << "Enter the matrix elements row by row:\n";
    int** matrix = allocateMatrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int newRows, newCols;
    int** transposed_matrix = Transpose(matrix, rows, cols, newRows, newCols);

    cout << "Transposed matrix:\n";
    for (int i = 0; i < newRows; ++i) {
        for (int j = 0; j < newCols; ++j) {
            cout << transposed_matrix[i][j] << " ";
        }
        cout << "\n";
    }

    deallocateMatrix(matrix, rows);
    deallocateMatrix(transposed_matrix, newRows);

    return 0;
}

