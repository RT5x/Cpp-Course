#include <iostream>

/*
Relational Operators: Comparing things
    - Must have operator expressions in parenthesis.
    - Greater than (>)
    - Less than (<)
    - Less than or equal to (<=)
    - Greater than or equal to (>=)
    - Equal (==)
    - Not equal to (!=)

*/

int main(){

int num1 {45};
int num2 {60};
std::cout << "number1: " << num1 << std::endl;
std::cout << "number 2: " << num2 << std::endl;
std::cout << std::endl;
std::cout << "Comparing variables";
std::cout << std::endl;

std::cout << std::boolalpha;    // Makes booleans show as "true" or "false" rather than "1" or "0".

std::cout << "num1 < num2: " << (num1 < num2) << std::endl;     // Asks: is num1 less than num2?    (True)
std::cout << "num1 > num2: " << (num1 > num2) << std::endl;     // Asks: is num1 greater than num2?     (False)
std::cout << "num1 >= num2: " << (num1 >= num2) << std::endl;   // Asks: is num1 greater than or equal to num2?     (False)
std::cout << "num1 <= num2: " << (num1 <= num2) << std::endl;   // Asks: is num1 less than or equal to num2?        (True)
std::cout << "num1 == num2: " << (num1 == num2) << std::endl;   // Asks: is num1 equal to num2?         (False)
std::cout << "num2 != num2: " << (num1 != num2) << std::endl;   // Asks: is num1 not equal to num2?     (True)
return 0;
}
