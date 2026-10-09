// This is the translated version of the Sample_Calculator.py file int C++20 language standard version.
// Here is the original Python code for reference:

// # This is a simple program to design a calculator that accepts input from the user.
// # I will later translate this into C++ to practice my C++ skills.

// def main():
//     print ("This is a Calculator")

//     user_input = input("""" 
//     Select the arithmetic operation you want to perform: 
//         1. Addition
//         2. Subtraction
//         3. Multiplication
//         4. Division
//         5. Modulus
//         6. Exponentiation
//         7. Floor Division
//                             """)

//     if user_input == "1" or user_input == "Addition":
//         num1 = float(input("Enter the first number: "))
//         num2 = float(input("Enter the second number: "))
//         result = num1 + num2
//         print(f"The result of addition is: {result}")

//     elif user_input == "2" or user_input == "Subtraction":
//         num1 = float(input("Enter the first number: "))
//         num2 = float(input("Enter the second number: "))
//         result = num1 - num2
//         print(f"The result of subtraction is: {result}")

//     elif user_input == "3" or user_input == "Multiplication":
//         num1 = float(input("Enter the first number: "))
//         num2 = float(input("Enter the second number: "))
//         result = num1 * num2
//         print(f"The result of multiplication is: {result}")

//     elif user_input == "4" or user_input == "Division":
//         num1 = float(input("Enter the first number: "))
//         num2 = float(input("Enter the second number: "))
//         if num2 == 0:
//             print("Error: Division by zero is not allowed.")
//         else:
//             result = num1 / num2
//             print(f"The result of division is: {result}")

//     elif user_input == "5" or user_input == "Modulus":
//         num1 = float(input("Enter the first number: "))
//         num2 = float(input("Enter the second number: "))
//         if num2 == 0:
//             print("Error: Modulus by zero is not allowed.")
//         else:
//             result = num1 % num2
//             print(f"The result of modulus is: {result}")

//     elif user_input == "6" or user_input == "Exponentiation":
//         num1 = float(input("Enter the base number: "))
//         num2 = float(input("Enter the exponent: "))
//         result = num1 ** num2
//         print(f"The result of exponentiation is: {result}")

//     elif user_input == "7" or user_input == "Floor Division":
//         num1 = float(input("Enter the first number: "))
//         num2 = float(input("Enter the second number: "))
//         if num2 == 0:
//             print("Error: Floor division by zero is not allowed.")
//         else:
//             result = num1 // num2
//             print(f"The result of floor division is: {result}")

//     else:
//         print("Invalid input. Please select a valid operation.")

// main()
    
// Here is the translated C++ code:
    

#include <iostream>
#include <format>
#include <cmath>

int main() {
    using std::cout;
    using std::format;
    using std::cin;
    using std::string;

    cout << "This is a Calculator \n";

    string user_input;
    double num1, num2, result;

    cout << R"(
    Select the arithmetic operation you want to perform:
     1. Addition
     2. Subtraction
     3. Multiplication
     4. Division
     5. Modulus
     6. Exponentiation
     7. Floor Division
                            )";

    cin >> user_input;

    if (user_input == "1" || user_input == "Addition") {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 + num2;
        cout << format("The result of addition is: {} \n", result);
    }
    
    else if (user_input == "2" || user_input == "Subtraction") {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 - num2;
        cout << format("The result of subtraction is: {} \n", result);
    }
    
    else if (user_input == "3" || user_input == "Multiplication") {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 * num2;
        cout << format("The result of multiplication is: {} \n", result);
    }
    
    else if (user_input == "4" || user_input == "Division") {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed. \n";
        } else {
            result = num1 / num2;
            cout << format("The result of division is: {} \n", result);
        }
    }
    
    else if (user_input == "5" || user_input == "Modulus") {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        if (num2 == 0) {
            cout << "Error: Modulus by zero is not allowed. \n";
        } else {
            result = static_cast<int>(num1) % static_cast<int>(num2);
            cout << format("The result of modulus is: {} \n", result);
        }
    }
    
    else if (user_input == "6" || user_input == "Exponentiation") {
        cout << "Enter the base number: ";
        cin >> num1;
        cout << "Enter the exponent: ";
        cin >> num2;
        result = pow(num1, num2);
        cout << format("The result of exponentiation is: {} \n", result);
    }
    
    else if (user_input == "7" || user_input == "Floor Division") {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        if (num2 == 0) {
            cout << "Error: Floor division by zero is not allowed. \n";
        } else {
            result = static_cast<int>(num1) / static_cast<int>(num2);
            cout << format("The result of floor division is: {} \n", result);
        }
    }
    
    else {
        cout << "Invalid input. Please select a valid operation. \n";
    }

    
}