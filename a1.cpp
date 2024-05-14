#include <iostream>

int main() {
    // Define an array of integers with a size of 5
    int myArray[5];

    // Initialize the array with values
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Print the elements of the array
    std::cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Accessing and modifying an element of the array
    myArray[2] = 100;
    std::cout << "Modified array elements are: ";
    for(int i = 0; i < 5; i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
