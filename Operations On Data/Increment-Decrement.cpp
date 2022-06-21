#include <iostream>

/*

Increment/Decrement: Increases or decreases original stored value by 1
Types:
    - Regular (value = value + 1)
    - Prefix (++value)
    - Postfix (value++)

*/

int main(){

int value1 {5};
// Regular Increment by 1
value1 = value1 + 1;
std::cout << "value1: " << value1 << std::endl;     //6

value1 = 5;  // Resets value to 5
value1 = value1 - 1;    // Decrements by one
std::cout << "value1: " << value1 << std::endl;     //4
std::cout << std::endl;


// Postfix Increment/Decrement
value1 = 5;
std::cout << "The value is (incrementing): " << value1++ << std::endl;      // Postfix increment by one.
std::cout << "value1: " << value1 << std::endl;     //6

std::cout << std::endl;

value1 = 5;     // Resets value1
std::cout << "The value is (decrementing): " << value1-- << std::endl;      // Postfix decrement by one.
std::cout << "value1: " << value1 << std::endl;     //4
std::cout << std::endl;
// Prefix decrement
value1 = 5;
++value1;       // Prefix increment by 1
std::cout << "The value is (prefix++): " << value1 << std::endl;
std::cout << std::endl;     //6
value1 = 5;
--value1;
std::cout << "The value is (prefix--): " << value1 << std::endl;
std::cout << std::endl;     //4

return 0;
}
