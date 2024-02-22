#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";

    // Get the length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Check if the string is empty
    if (str.empty()) {
        cout << "The string is empty" << endl;
    } else {
        cout << "The string is not empty" << endl;
    }

    // Append additional characters to the string
    str.append(" Welcome");
    cout << "Appended string: " << str << endl;

    // Get a substring of the string
    string substr = str.substr(7, 5); // starting at index 7, take 5 characters
    cout << "Substring: " << substr << endl;

    // Find the position of a substring within the string
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "Found 'World' at position: " << pos << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    // Erase a portion of the string
    str.erase(5, 7); // starting at index 5, erase 7 characters
    cout << "String after erasing: " << str << endl;

    return 0;
}