include <iostream>

void deleteFromLocation(int arr[], int& n, int index) {
    if (index < 0 || index >= n) {
        std::cout << "Index out of bounds. No item deleted." << std::endl;
        return;
    }
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
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
    
    int index;
    std::cout << "Enter the index of the item to delete (0 to " << n - 1 << "): ";
    std::cin >> index;
    
    deleteFromLocation(arr, n, index);
    
    std::cout << "Array after deletion: ";
    printArray(arr, n);
    
    return 0;
