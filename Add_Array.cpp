include <iostream>

void addArrays(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
