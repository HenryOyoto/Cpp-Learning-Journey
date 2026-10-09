// "using" is a reserved keyword used to create an additional name (alias) for another data type.
/* It is a new identifier for an existing data type. It is used to make the code
more readable and easier to understand and reduces typos */

#include <iostream>
#include <vector>
#include <format>

int main() {
    using text_t = std::string; // Creating an alias for std::string
    using number_t = int; // Creating an alias for int

    using std::cout;
    using std::format;

    text_t FirstName = "Henry";
    number_t Age = 25;

    cout << "My name is " << FirstName << " and I am " << Age << " years old. \n";
    cout << format("My name is {} and I am {} years old. \n", FirstName, Age); // Using formatted string.

return 0;
}