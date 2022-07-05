#include <iostream>

/*
References and Const

*/


int main(){

// Non-const reference
std::cout << "Non-const reference : " << std::endl;
int val1 {32};
int &ref_val1 {val1};
std::cout << "val1 : " << val1 << std::endl;
std::cout << "ref_val1 : " << ref_val1 << std::endl;
std::cout << "&ref_val1 : " << &ref_val1 << std::endl;
std::cout << std::endl;

// Modifying original var1 through reference: 
std::cout << "Modifying original var1 through reference : " << std::endl;
ref_val1++;
std::cout << "val1 : " << val1 << std::endl;
std::cout << "ref_val1 : " << ref_val1 << std::endl;
std::cout << "&ref_val1 : " << &ref_val1 << std::endl;
std::cout << std::endl;

// Const reference: 
std::cout << "const references : " << std::endl;
val1 = 30;
const int& const_ref_val1 {val1};
std::cout << "val1 : " << val1 << std::endl;
std::cout << "const_ref_val1 : " << const_ref_val1 << std::endl;
std::cout << "&const_ref_val1 : " << &const_ref_val1 << std::endl;
std::cout << std::endl;

// Cannot modify const through reference:
    // Error:  -->   ref_val1 = 30;

return 0;

}
