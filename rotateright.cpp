#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 
    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    
    k = k % n;
    
    if (k != 0) {
      
        for (int i = 0; i < k; i++) {
            // Store the last element
            int last = arr[n - 1];
            

            for (int j = n - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            
            arr[0] = last;
        }
    }
    
    std::cout << "Array after " << k << " right rotations: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}
