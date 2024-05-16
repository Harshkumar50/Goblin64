#include <iostream>
#include <stdexcept>

int main() {
    int n;
    std::cin >> n;

    try {
        if (n <= 0) {
            throw std::invalid_argument("Array size should be a positive number.");
        }

        if (n == 0) {
            throw std::invalid_argument("Array is empty.");
        }

        int* arr = new int[n];

        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            std::cout << arr[i];
            if (i < n - 1) {
                std::cout << " ";
            }
        }

        delete[] arr; // Deallocate the dynamic array
        std::cout << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Exception caught. " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught." << std::endl;
    }

    return 0;
}
