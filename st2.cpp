#include <iostream>
#include <string>
#include <algorithm> // for std::transform

int main() {
    // Define a string
    std::string myString = "Hello, World!";

    // Accessing characters in a string
    char firstChar = myString[0];
    char lastChar = myString[myString.size() - 1];

    // Slicing a string
    std::string substring = myString.substr(7, 5); // starts at index 7, length 5

    // String concatenation
    std::string greeting = "Hello";
    std::string name = "Alice";
    std::string fullGreeting = greeting + ", " + name + "!";

    // String length
    size_t length = myString.size();

    // String methods
    std::string upperCase = myString;
    std::transform(upperCase.begin(), upperCase.end(), upperCase.begin(), ::toupper);

    std::string lowerCase = myString;
    std::transform(lowerCase.begin(), lowerCase.end(), lowerCase.begin(), ::tolower);

    // Convert to title case (simple version: capitalize first letter)
    std::string titleCase = myString;
    if (!titleCase.empty()) {
        titleCase[0] = std::toupper(titleCase[0]);
        for (size_t i = 1; i < titleCase.size(); ++i) {
            if (titleCase[i - 1] == ' ') {
                titleCase[i] = std::toupper(titleCase[i]);
            } else {
                titleCase[i] = std::tolower(titleCase[i]);
            }
        }
    }

    std::string replacedString = myString;
    size_t pos = replacedString.find("World");
    if (pos != std::string::npos) {
        replacedString.replace(pos, 5, "C++");
    }

    // Check if substring exists
    bool containsHello = (myString.find("Hello") != std::string::npos);

    // Print results
    std::cout << "First character: " << firstChar << std::endl;
    std::cout << "Last character: " << lastChar << std::endl;
    std::cout << "Substring: " << substring << std::endl;
    std::cout << "Full greeting: " << fullGreeting << std::endl;
    std::cout << "Length of string: " << length << std::endl;
    std::cout << "Upper case: " << upperCase << std::endl;
    std::cout << "Lower case: " << lowerCase << std::endl;
    std::cout << "Title case: " << titleCase << std::endl;
    std::cout << "Replaced string: " << replacedString << std::endl;
    std::cout << "Contains 'Hello': " << (containsHello ? "Yes" : "No") << std::endl;

    return 
