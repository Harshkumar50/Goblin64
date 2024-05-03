#include <iostream>
#include <string>

int main() {
    // Creating a string and initializing it
    std::string greeting = "Hello, world!";

    // Outputting the string to the console
    std::cout << "Message: " << greeting << std::endl;

    // Modifying the string
    greeting += " Have a nice day!";

    // Outputting the modified string
    std::cout << "Modified Message: " << greeting << std::endl;

    // Getting the length of the string
    std::cout << "Length of Message: " << greeting.length() << std::endl;

    // Accessing individual characters of the string
    char firstChar = greeting[0]; // Accessing the first character
    std::cout << "First Character: " << firstChar << std::endl;

    // Finding a substring within the string
    std::string searchStr = "world";
    size_t foundPos = greeting.find(searchStr);
    if (foundPos != std::string::npos) {
        std::cout << "Substring '" << searchStr << "' found at position: " << foundPos << std::endl;
    } else {
        std::cout << "Substring '" << searchStr << "' not found." << std::endl;
    }

    return 0;
}
