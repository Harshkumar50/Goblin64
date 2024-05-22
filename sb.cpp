#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class StringBuilder {
public:
    // Add a string to the builder
    void append(const std::string& str) {
        parts.push_back(str);
    }

    // Add a character to the builder
    void append(char c) {
        parts.push_back(std::string(1, c));
    }

    // Add an integer to the builder
    void append(int num) {
        parts.push_back(std::to_string(num));
    }

    // Convert all parts to a single string
    std::string toString() const {
        std::ostringstream oss;
        for (const auto& part : parts) {
            oss << part;
        }
        return oss.str();
    }

private:
    std::vector<std::string> parts;
};

int main() {
    StringBuilder sb;
    sb.append("Hello");
    sb.append(", ");
    sb.append("world");
    sb.append('!');
    sb.append(2024);
    
    std::string result = sb.toString();
    std::cout << result << std::endl; // Output: Hello, world!2024
    
    return 0;
}
