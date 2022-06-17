#include <iostream>
/*

    Statements:
        - A statement is a basic unit of computation in C++.
        - Every C++ program is a collection of statements.
        - Statements end with a semicolon (;).
        - Statements are executed in top to bottom order.
        - Execution keeps going until the program ends or until another sequence of statements is met.

    Functions:
        - Functions take in variables and creates a new result.
        - Functions syntax is 
                int funct_name(parameter1, parameter2) { 
                    function body 
                    }
        - Functions must be defined before they are used.
*/

int addNumbers(int first_param, int second_param){ // adding numbers function

    int result = first_param + second_param;
    return result;
    // addNumbers funct defined before it is called.
}

int multiply(int param1, int param2){ //Multiplies two Numbers

    int result1 = param1 * param2;
    return result1;
}

int main(int argc, char **argv)

{
    int firstNumber = 12;
    int secondNumber = 9;
    int thirdNumber {5}; //Statement
    int sum = firstNumber + secondNumber + thirdNumber;
    int product = firstNumber * secondNumber;
    // Returns the sum
    std::cout << "First number is: " << firstNumber << std::endl;
    std::cout << "Second number is: " << secondNumber << std::endl;
    std::cout << "Third number is: " << thirdNumber << std::endl;
    std::cout << "Sum is: " << sum << std::endl;
    // prints out the sum 26
    sum = addNumbers(28,1);

    std::cout << "Sum: " << sum << std::endl;
    // prints the other sum, 29

    sum = addNumbers(1,3);
    std::cout << "Sum: " << addNumbers(1,3) << std::endl;
    // prints 4

    product = multiply(4,8);
    std::cout << "Product: " << product << std::endl;

    return 0;
}

