#include <iostream>

int main() {
    // This is Day 3 of the C++ Learning Journey
    // This is just a simple program to demonstrate the use of data types in C++
    
    //Integers
    int age = 25;
    int year = 2026;
    int days = 7.5; // This will cause a warning or error because 7.5 is a double, not an int

    std::cout << "Age: " << age << '\n';
    std::cout << "Year: " << year << '\n';
    std::cout << "Days: " << days << '\n';

    // Doubles (Numbers with decimal points)
    double days_double = 7.5;
    double price = 25.99;
    double temperature = 29.1;

    std::cout << "Days (double): " << days_double << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Temperature: " << temperature << '\n';

    // Single characters
    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    std::cout << "Grade: " << grade << '\n';
    std::cout << "Initial: " << initial << '\n';
    std::cout << "Currency: " << currency << '\n';

    // Boolean values (true or false)
    bool isStudent = true;
    bool isGraduated = false;

    std::cout << "Is Student: " << isStudent << '\n';
    std::cout << "Is Graduated: " << isGraduated << '\n';

    // Strings (Sequence of characters)
    std::string name = "Henry";
    std::string city = "Nairobi";
    std::string day = "Friday";
    std::string food = "Chicken";
    std::string street = "123 Main St";

    std::cout << "Name: " << name << '\n';
    std::cout << "City: " << city << '\n';
    std::cout << "Day: " << day << '\n';
    std::cout << "Food: " << food << '\n';
    std::cout << "Street: " << street << '\n';

    std::cout << "Hello " << name <<
    ", I heard you are from " << city << " and you love " << food << "!" << '\n';

    return 0;
}