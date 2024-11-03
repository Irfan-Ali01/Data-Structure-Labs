#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Main diagonal elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary diagonal elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << matrix[i][SIZE - i - 1] << " ";
    }
    cout << endl;

    return 0;
}
