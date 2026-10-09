# #include <iostream>

# int main() {
#     /* This is Day 4 of the C++ Learning Journey 
#     This is a simple program to demonstrate the use of arithmetic operators */
#     int students = 20;
#     students += 3;
#     std::cout << "The total number of students is: " << students << "\n";

#     students ++;
#     std::cout << "The total number of students is: " << students << "\n";

#     students -= 2;
#     std::cout << "The total number of students is: " << students << "\n";

#     students --;
#     std::cout << "The total number of students is: " << students << "\n";

#     students *= 2;
#     std::cout << "The total number of students is: " << students << "\n";

#     students /= 2;
#     std::cout << "The total number of students is: " << students << "\n";
   
#     double double_students = students;
#     double_students /= 5;
#     std::cout << "The total number of students is: " << double_students << "\n";

#     int remainder = students % 5;
#     std::cout << "The remainder of students is: " << remainder << "\n";
    
#     return 0;
# }

def main():
    students = 20
    students += 3
    print(f"The total number of students is: {students}")

    students += 1
    print(f"The total number of students is: {students}")

    students -= 2
    print(f"The total number of students is: {students}")

    students -= 1
    print(f"The total number of students is: {students}")

    students *= 2
    print(f"The total number of students is: {students}")

    students /= 2
    print(f"The total number of students is: {students}")

    remainder = students % 5 #Shifted the remainder calculation to after the division to match the original C++ code logic
    print(f"The remainder of students is: {remainder}")

    students /= 5
    print(f"The total number of students is: {students}")

main()