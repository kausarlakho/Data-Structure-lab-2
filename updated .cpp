#include <iostream>

void updateElement(int arr[], int n, int index, int newValue) {
    if (index < 0 || index >= n) {
        std::cout << "Index out of bounds. No update performed." << std::endl;
    } else {
        arr[index] = newValue;
        std::cout << "Element at index " << index << " updated to " << newValue << "." << std::endl;
    }
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
    
    int index, newValue;
    std::cout << "Enter the index of the element to update (0 to " << n - 1 << "): ";
    std::cin >> index;
    
    std::cout << "Enter the new value: ";
    std::cin >> newValue;
    
    updateElement(arr, n, index, newValue);
    
    std::cout << "Updated array: ";
    printArray(arr, n);
    
    return 0;
}