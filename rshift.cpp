#include <iostream>

int main() {
    
    int number = 12;  
    int shifted_number = number >> 2;  // Right shift by 2 positions
    
    std::cout << "Original number: " << number << std::endl;
    std::cout << "Number after right shift by 2 positions: " << shifted_number << std::endl;
    
    return 0;
}
