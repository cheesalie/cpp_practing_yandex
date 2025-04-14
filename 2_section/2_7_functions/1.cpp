#include <iostream>
#include <utility>

using namespace std;

pair<int, int> func_matrix_arg_max() {
    int rows, cols;

    cout << "Enter the number of lines: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    pair<int, int> max_pos = {0, 0};
    int max_val = matrix[0][0];
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_pos = {i, j};
            }
        }
    }
    
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    cout << "The position of the maximum element: (" << max_pos.first << ", " << max_pos.second << ")" << endl;
    
    return max_pos;
}