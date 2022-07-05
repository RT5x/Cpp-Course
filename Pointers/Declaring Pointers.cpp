#include <iostream>

/*
Pointers: A special type of variable that stores the location of other variables in memory.
- Pointers must be of the same type as the variable
    - Cannot store the address of an int if the pointer is declared as a double.
- 


*/

int main(){
// Declaring pointer
int* p_number {};  // Can only store an address of a variable of type int
    // Empty braces initializes with nullptr by default
double * p_fractional_number{};     // Can only store an address of a variable of type double

//Explicitly initialize a null pointer
int * p_number1 {nullptr};  
double * p_number2{nullptr};

// All pointers have the same size no matter the type they store (8 bytes)
std::cout << "Size of number pointer : " << sizeof(p_number) << ", size of int : " << sizeof(int) << std::endl;
std::cout << "Size of double pointer : " << sizeof(p_fractional_number) << ", size of double : " << sizeof(double) << std::endl;
std::cout << "Size of number1 pointer : " << sizeof(p_number1) << ", size of int : " << sizeof(int) << std::endl;
std::cout << "Size of fractional_number pointer : " << sizeof(p_fractional_number) << ", size of double : " << sizeof(double) << std::endl;

// Initializing pointers and assigning data

// Pointers must store addresses of other variables
int int_var {43};
int *p_int{&int_var};   // Address of the operator (&)
std::cout << "Int var : " << int_var << std::endl;
std::cout << "p_int (Address in memory) : " << p_int << std::endl;  //0x732a5ff9b4 [hexadecimal address]

// The stored address can be changed
int int_var1 {65};
p_int = &int_var1;  // Assign different address to pointer
std::cout << "p_int (with other address) : " << p_int << std::endl; //0x732a5ff9b0

// Cannot cross assign between pointers of different types:
/*
int *p_int{nullptr};
double var1 {2.242};
p_int = &var1;  // Compiler error, cannot assign integer pointer to a double.

*/


// Dereferencing a pointer: 
int* p_int1{nullptr};
int var8 {56};
p_int1 = &var8;
std::cout << "value : " << *p_int1 << std::endl;        // Reads the value stored in the address in the pointer
return 0;

}
