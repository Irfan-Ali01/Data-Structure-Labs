#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < SIZE; i++) {
        mainDiagonalSum += matrix[i][i];
    }

    for (int i = 0; i < SIZE; i++) {
        secondaryDiagonalSum += matrix[i][SIZE - i - 1];
    }

    cout << "Sum of main diagonal elements: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal elements: " << secondaryDiagonalSum << endl;

    return 0;
}
