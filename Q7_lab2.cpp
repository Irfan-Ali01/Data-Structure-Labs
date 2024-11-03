#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int delItem;

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Ask the user for the item to delete
    cout << "Enter the item to delete: ";
    cin >> delItem;

    // Find the item and delete it
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == delItem) {
            for (int j = i; j < SIZE - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[SIZE - 1] = 0;  // Optional: Set the last element to 0
            break;
        }
    }

    // Print the array after deletion
    cout << "Array after deletion: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
