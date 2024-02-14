#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        // Correct initialization of key and j:
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key one position ahead:
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key into its correct position:
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a newline after printing the array
}

int main() {
    int arr[] = {1, 5, 4, 3, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Correct array size calculation

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
