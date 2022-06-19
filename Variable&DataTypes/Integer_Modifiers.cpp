#include <iostream>

/*

Integer Modifiers:
    - Addons to the int variable that allows it to change to a different value.
    - Work for integral types: those that can store decimal numbers.


Integers storing positive/negative numbers:
    signed int value1 {10};         Unsigned data range: 0 ~ 2^n - 1
    signed int value2 {-300};       Signed range: -2^(n-1) ~ 2^(n-1) - 1
        Both signed and unsigned integers still store 4 bytes in memory.

Short/Long Modifiers:
    - short variables take 2 bytes in memory.
    - Shortens the size in memory for the original variable.

    - long variables usually take 8 bytes.

*/

int main(){

    signed int value_1 {10};
    signed int value_2 {-300};
    // Can store positive or negative numbers in integer types.
    std::cout << "Value 1: " << value_1 << std::endl;
    std::cout << "Value 2:" << value_2 << std::endl;

    // Both return 4 bytes:
        std::cout << "The size of value_1 is " << sizeof(value_1) << " Bytes" << std::endl;
        std::cout << "The size of value_2 is " << sizeof(value_2) << " Bytes" << std::endl;

    unsigned int value_3 {4};
        // Allows storage of only positive integers with unsigned modifier.
        std::cout << "Value 3: " << value_3 << std::endl;
    
    // unsigned int value_4 {-5};
    // Terminal throws a compiler error: unsigned integers cannot be negative.
    
    // Modifier combinations:
    short short_var {829}; // 2 Bytes
    short int short_int {354};
    signed short signed_short {122};
    signed short int signed_short_int {-34};
    unsigned short int unsigned_short_int {42};

    int int_var {55}; // 4 Bytes
    signed signed_var {66};
    signed int signed_int {-24};
    unsigned int unsigned_int {179};

    long long_var {42}; // 4 or 8 Bytes
    long int long_int {242};
    signed long signed_long {241};
    unsigned long int unsigned_long_int {24};
    signed long int signed_long_int {241};

    long long long_long {888}; // 8 Bytes
    long long int long_long_int {283};
    signed long long signed_long_long {144};
    signed long long int signed_long_long_int {142};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout << "Short variable: " << short_var << " , size: " << sizeof(short_var) << std::endl; 
    std::cout << "Short int: " << short_int << " , size: " << sizeof(short_int) << std::endl;
    std::cout << "Signed Short variable: " << signed_short << " , size: " << sizeof(signed_short) << std::endl;
    std::cout << "Signed Short int: " << signed_short_int << " , size: " << sizeof(signed_short_int) << std::endl;
    std::cout << "Unsigned Short int: " << unsigned_short_int << " , size: " << sizeof(unsigned_short_int) << std::endl;
    // 4 Bytes

    std::cout << " ----------------------------- " << std::endl;

    std::cout << "Integer variable: " << int_var << " , size: " << sizeof(int_var) << std::endl;
    std::cout << "Signed variable: " << signed_var << " , size: " << sizeof(signed_var) << std::endl;
    std::cout << "Signed integer: " << signed_int << " , size: " << sizeof(signed_int) << std::endl;
    std::cout << "Unsigned integer: " << unsigned_int << " , size: " << sizeof(unsigned_int) << std::endl;
    // 4 Bytes

    std::cout << " ----------------------------- " << std::endl;
   
    std::cout << "Long variable: " << long_var << " , size: " << sizeof(long_var) << std::endl;
    std::cout << "Long int: " << long_int << " , size: " << sizeof(long_int) << std::endl;
    std::cout << "Signed long: " << signed_long << " , size: " << sizeof(signed_long) << std::endl;
    std::cout << "Unsigned long int: " << unsigned_long_int << " , size: " << sizeof(unsigned_long_int) << std::endl;
    std::cout << "Signed long int: " << signed_long_int << " , size: " << sizeof(signed_long_int) << std::endl;
    // 4 Bytes

    std::cout << " ----------------------------- " << std::endl;

    std::cout << "Long long variable: " << long_long << " , size: " << sizeof(long_long) << std::endl;
    std::cout << "Long long int: " << long_long_int << " , size: " << sizeof(long_long_int) << std::endl;
    std::cout << "Signed long long: " << signed_long_long << " , size: " << sizeof(signed_long_long) << std::endl;
    std::cout << "Signed long long int: " << signed_long_long_int << " , size: " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "Unsigned long long int: " << unsigned_long_long_int << " , size: " << sizeof(unsigned_long_long_int) << std::endl;
    // 8 Bytes

return 0;
}


