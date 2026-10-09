// Typedef is a reserved keyword used to create an additional name (alias) for another data type.
/* It is new identifier for an existing data type. It is used to make the code more readable and 
easier to understand and reduces typos */
// Typedef has been replaced by "using" keyword in C++11 and later versions.

#include <iostream>
#include <vector>
#include <format>

int main() {
    typedef std::string text_t; // Creating an alias for std::string
    typedef int number_t; // Creating an alias for int

    using std::cout;
    using std::format;

    text_t FirstName = "Henry";
    number_t Age = 25;

    cout << "My name is " << FirstName << " and I am " << Age << " years old. \n";
    cout << format("My name is {} and I am {} years old. \n", FirstName, Age); // Using formatted string.

return 0;
}