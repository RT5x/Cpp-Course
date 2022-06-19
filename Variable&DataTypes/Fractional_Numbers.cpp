#include <iostream>
#include <iomanip>   // Standard libary for setprecision() function.
/*

Fractional Numbers:
    - Also called floating point types.
    - Used to represent numbers with fractional parts.
    - Can use scientific notation with these components.
    - Can divide by zero with floating point types.

REPRESENTATION TYPES:
(Precision is the number of bits you can represent with that type, starting with significant digits after the decimal.)
    - Ex:         1.34 has precision of 3

    Type        Size        Precision       Comment                                Example

    float       4 bytes         7               -                                 1.38691
    double      8 bytes         15          Recommended default                 2.8235982753
long double     12 bytes        >15                                            3.23897029375672365872

- Number is chopped off if the input number is greater than the precision allowed.


*/

int main(){
    // Declare + Initialize variables
    float number_1 {1.81728f};  // Add an "f" to the end of the number to signify that it is a float.
    double number_2 {2.093204827};  // With no number at the end, the digit is by default a double.
    long double number_3 {4.7298737518632956387L};     // Add an "L" at the end to represent a long double.
    double number_4 {3.287e4};  //Scientific notation
    double number_5 {0.000000000000001214}; // Still compiles because zeroes do not count for precision.
    float number_6 {0.00f};
    long double number_7 {2.428e10L};
    double number_8{}; // Initialized to zero by default.

    // Size of variables:
    std::cout << "Size of float: " << sizeof(number_1) << " bytes." << std::endl;
    std::cout << "Size of double: " << sizeof(number_2) << " bytes." << std::endl;
    std::cout << "Size of long double: " << sizeof(number_3) << " bytes." << std::endl;

    std::cout << "----------------------" << std::endl;

    std::cout << std::setprecision(20); // Controls maximum precision seen from std::cout
    std::cout << "Number 1 is: " << number_1 << std::endl;  // Precision = 7
    std::cout << "Number 2 is: " << number_2 << std::endl;  // Precision = 15
    std::cout << "Number 3 is: " << number_3 << std::endl;  
    std::cout << "Number 4 is: " << number_4 << std::endl;  
    std::cout << "Number 5 is: " << number_5 << std::endl;  
    std::cout << "Number 6 is: " << number_6 << std::endl;  
    std::cout << "Number 7 is: " << number_7 << std::endl;  
    
    double result1 {number_3 / number_6};  //Infty

    double result2 {number_6 / number_6};   //nan

    std::cout << result1 << std::endl;
        // Gives +/- Infinity depending on sign of float.

    std::cout << result2 << std::endl;
        // This causes NaN warning (not a number) to appear.

return 0;
}
