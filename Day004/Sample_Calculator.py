# This is a simple program to design a calculator that accepts input from the user.
# I will later translate this into C++ to practice my C++ skills.

def main():
    print ("This is a Calculator")

    user_input = input("""" 
    Select the arithmetic operation you want to perform: 
        1. Addition
        2. Subtraction
        3. Multiplication
        4. Division
        5. Modulus
        6. Exponentiation
        7. Floor Division
                            """)

    if user_input == "1" or user_input == "Addition":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        result = num1 + num2
        print(f"The result of addition is: {result}")

    elif user_input == "2" or user_input == "Subtraction":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        result = num1 - num2
        print(f"The result of subtraction is: {result}")

    elif user_input == "3" or user_input == "Multiplication":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        result = num1 * num2
        print(f"The result of multiplication is: {result}")

    elif user_input == "4" or user_input == "Division":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        if num2 == 0:
            print("Error: Division by zero is not allowed.")
        else:
            result = num1 / num2
            print(f"The result of division is: {result}")

    elif user_input == "5" or user_input == "Modulus":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        if num2 == 0:
            print("Error: Modulus by zero is not allowed.")
        else:
            result = num1 % num2
            print(f"The result of modulus is: {result}")

    elif user_input == "6" or user_input == "Exponentiation":
        num1 = float(input("Enter the base number: "))
        num2 = float(input("Enter the exponent: "))
        result = num1 ** num2
        print(f"The result of exponentiation is: {result}")

    elif user_input == "7" or user_input == "Floor Division":
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        if num2 == 0:
            print("Error: Floor division by zero is not allowed.")
        else:
            result = num1 // num2
            print(f"The result of floor division is: {result}")

    else:
        print("Invalid input. Please select a valid operation.")

main()
    

    
