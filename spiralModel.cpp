#include <iostream>
using namespace std;

int* spiralMatrix(int matrix[100][100], int rows, int cols) {
    int length = rows * cols;
    int* res = new int[length];
    int k = 0;
    int rowStart = 0, colStart = 0, rowEnd = rows - 1, colEnd = cols - 1;
    while (rowStart <= rowEnd && colStart <= colEnd) {
        for (int col = colStart; col <= colEnd; col++) {
            res[k++] = matrix[rowStart][col];
        }
        rowStart++;
        for (int row = rowStart; row <= rowEnd; row++) {
            res[k++] = matrix[row][colEnd];
        }
        colEnd--;
        if (rowStart <= rowEnd) {
            for (int col = colEnd; col >= colStart; col--) {
                res[k++] = matrix[rowEnd][col];
            }
            rowEnd--;
        }
        if (colStart <= colEnd) {
            for (int row = rowEnd; row >= rowStart; row--) {
                res[k++] = matrix[row][colStart];
            }
            colStart++;
        }
    }
    return res;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int matrix[100][100];
    int length = rows * cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    int* spiralRes = spiralMatrix(matrix, rows, cols);
    for (int i = 0; i < length; i++) {
        cout << spiralRes[i] << " ";
    }
    delete[] spiralRes; // Free the dynamically allocated memory
    return 0;
}
