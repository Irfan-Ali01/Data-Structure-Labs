#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transposed[COLS][ROWS];

    // Transpose the matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
