##include <iostream>

#int main() {
 #   const double PI = 3.14159;
  #  double radius = 10.0;
   # double circumference = 2 * PI * radius;
    #const int LIGHT_SPEED = 299792458; // in meters per second

    #std::cout << "Circumference of the circle: " << circumference << "cm" << '\n';
    #std::cout << "Speed of light: " << LIGHT_SPEED << " m/s" << '\n';

    #return 0;
#}

def main():
    PI = 3.14159
    radius = 10.0
    circumference = 2 * PI * radius
    LIGHT_SPEED = 299792458  # in meters per second

    print("Circumference of the circle:", circumference, "cm")
    print("Speed of light:", LIGHT_SPEED, "m/s")

main()