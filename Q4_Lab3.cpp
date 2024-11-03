#include <iostream>
using namespace std;

int main() {
    const int X = 2, Y = 2, Z = 2;
    int arr1[X][Y][Z] = {
        {
            {1, 2}, 
            {3, 4}
        }, 
        {
            {5, 6}, 
            {7, 8}
        }
    };
    
    int arr2[X][Y][Z] = {
        {
            {8, 7}, 
            {6, 5}
        }, 
        {
            {4, 3}, 
            {2, 1}
        }
    };
    
    int result[X][Y][Z];

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                result[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
            }
        }
    }

    cout << "Resultant array after multiplication:" << endl;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                cout << result[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
