#include <iostream>
#include <vector>
#include <algorithm>

// Function to left rotate the array by d positions
void leftRotate(std::vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // To handle if d > n
    std::reverse(arr.begin(), arr.begin() + d);
    std::reverse(arr.begin() + d, arr.end());
    std::reverse(arr.begin(), arr.end());
}

// Function to print the array
void printArray(const std::vector<int>& arr) {
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 2; // Number of positions to rotate
    std::cout << "Original array: ";
    printArray(arr);

    leftRotate(arr, d);

    std::cout << "Array after left rotation by " << d << " positions: ";
    printArray(arr);

    return 0;
}
