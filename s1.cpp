#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring and initializing strings
    string greeting = "Hello,";
    string name;

    // Outputting a string
    cout << greeting << " what is your name?" << endl;

    // Inputting a string
    getline(cin, name);

    // Concatenating strings
    string fullGreeting = greeting + " " + name + "!";
    
    // Outputting the concatenated string
    cout << fullGreeting << endl;

    // Accessing and modifying individual characters in the string
    cout << "Character at index 0: " << fullGreeting[0] << endl;
    fullGreeting[6] = '!';
    cout << "Modified string: " << fullGreeting << endl;

    // Finding the length of the string
    cout << "Length of the string: " << fullGreeting.length() << endl;

    // Checking if string is empty
    if (fullGreeting.empty()) {
        cout << "The string is empty." << endl;
    } else {
        cout << "The string is not empty." << endl;
    }

    // Substring operations
    string substring = fullGreeting.substr(7, 5); // Extracting "what "
    cout << "Substring: " << substring << endl;

    // Finding position of a substring
    size_t pos = fullGreeting.find("your");
    if (pos != string::npos) {
        cout << "'your' found at position: " << pos << endl;
    } else {
        cout << "'your' not found in the string." << endl;
    }

    return 0;
}
