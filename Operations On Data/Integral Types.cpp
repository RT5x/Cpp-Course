#include <iostream>

/*
Weird Integral Types:
    Integral less than 4 bytes don't support arithmetic operations:
        - char (1 byte)
        - short int (2 bytes)
    - Compilers recognize this, and implicitly convert these values to int (4 bytes) so arithmetic operations can be done.
    - ints are the smallest types with which arithmetic operators can be done.
*/

int main(){
short int var1 {10};
short int var2 {18};

char var3 {4};
char var4 {19};

std::cout << "size of var1 : " << sizeof(var1) << " bytes." << std::endl;    // 2 bytes (short int)
std::cout << "size of var2 : " << sizeof(var2) << " bytes." <<std::endl;    // 2 bytes
std::cout << "size of var3 : " << sizeof(var3) << " bytes." <<std::endl;    // 1 byte (char)
std::cout << "size of var4 : " << sizeof(var4) << " bytes." <<std::endl;    // 1 byte

auto result1 = var1 + var2;     // conversion to integer type
std::cout << "size of result1: " << sizeof(result1) << " bytes." << std::endl;   // 4 bytes (int)

return 0;
}
