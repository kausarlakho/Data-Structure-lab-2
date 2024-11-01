include <iostream>

void deleteFromBottom(int arr[], int& n) {
    if (n <= 0) {
        std::cout << "Array is empty. No item to delete." << std::endl;
        return;
    }
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    printArray(arr, n);
    deleteFromBottom(arr, n);
    std::cout << "Array after deleting from bottom: ";
    printArray(arr, n);
    return 0;
}