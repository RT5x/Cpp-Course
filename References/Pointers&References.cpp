// Comparing pointers and references
#include <iostream>

/*
Pointers:
    - Must go through dereference operator to read/write
    - Can be changed to point somewhere else
    - Can be declared un-initialized

References:
    - Do not use dereferencing for read/write
    - Can't be changed to anything else
    - Must be initialized at declaration

References behave like constant pointers, but have an easier syntax and do not require dereferencing.

*/


int main(){

// Declare pointer and reference
double double_val {2.497};
double& ref_double_val {double_val};   //reference
double* p_double_val {&double_val}; //pointer

// Reading
std::cout << "double_val : " << double_val << std::endl;
std::cout << "ref_double_val : " << ref_double_val << std::endl;
std::cout << "p_double_val : " << p_double_val << std::endl;
std::cout << "&ref_double_val : " << &ref_double_val << std::endl;
std::cout << "*p_double_val : " << *p_double_val << std::endl;

//Writing through pointer
*p_double_val = 23.25;
std::cout << std::endl;
std::cout << "double_val : " << double_val << std::endl;
std::cout << "ref_double_val : " << ref_double_val << std::endl;
std::cout << "p_double_val : " << p_double_val << std::endl;
std::cout << "&ref_double_val : " << &ref_double_val << std::endl;
std::cout << "*p_double_val : " << *p_double_val << std::endl;

// Writing through reference
ref_double_val = 24.29;
std::cout << std::endl;
std::cout << "double_val : " << double_val << std::endl;
std::cout << "ref_double_val : " << ref_double_val << std::endl;
std::cout << "p_double_val : " << p_double_val << std::endl;
std::cout << "&ref_double_val : " << &ref_double_val << std::endl;
std::cout << "*p_double_val : " << *p_double_val << std::endl;

// Assigning another variable to reference (Address does not change):
double var2{24.04};
ref_double_val = var2;
std::cout << std::endl;
std::cout << "double_val : " << double_val << std::endl;
std::cout << "ref_double_val : " << ref_double_val << std::endl;    // Value changes, but memory address does not change.
                                                                    // Cannot make the reference reference something else.
std::cout << "p_double_val : " << p_double_val << std::endl;
std::cout << "&ref_double_val : " << &ref_double_val << std::endl;
std::cout << "*p_double_val : " << *p_double_val << std::endl;

// Making a pointer reference something else:
p_double_val = &var2;
std::cout << std::endl;
std::cout << "double_val : " << double_val << std::endl;
std::cout << "ref_double_val : " << ref_double_val << std::endl;    
std::cout << "p_double_val : " << p_double_val << std::endl;
std::cout << "&ref_double_val : " << &ref_double_val << std::endl;
std::cout << "*p_double_val : " << *p_double_val << std::endl;

return 0;

}
