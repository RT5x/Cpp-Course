#include <iostream>

/*

Compound Operators:
    - Allows for arithmetic operations, assigning the result to a value in one go.

*/

int main(){

int value {45};     // value = 45
std::cout << "The original value is: " << value << std::endl;
value += 5;     // stores value = value + 5     (Increment by 5)
std::cout << "The value is (after += 5): " << value << std::endl;
std::cout << std::endl;

value -= 5;     // stores value = value - 5    (Decrement by 5)
std::cout << "The value is (after -= 5): " << value << std::endl;
std::cout << std::endl;

value *=2;      // stores value = value * 2    (Multiply by 2)
std::cout << "The value is (after *= 2): " << value << std::endl;
std::cout << std::endl;

value /= 3;     // stores value = value / 3    (Divide by 3)
std::cout << "The value is (after /= 3): " << value << std::endl;
std::cout << std::endl;

value %= 11;     // stores value = value % 11   (Modulus operator)
std::cout << "The value is (after %= 11): " << value << std::endl;
std::cout << std::endl;


return 0;
}
