// Declaring References
#include <iostream>

/*
References: A way to set up aliases for variables with other names assigned to the same one.


*/


int main(){
int var {33};   // Original variable
double double_val {2.42};

// References
int& reference_to_var{var}; // Assigns through initialization
double& reference_to_double_val = double_val;  // Assigns through assignment

std::cout << "int value : " << var << std::endl;    //33
std::cout << "double value : " << double_val << std::endl;  //2.42
std::cout << "reference_to_int_value : " << reference_to_var << std::endl;  //33
std::cout << "reference_to_double_val : " << reference_to_double_val << std::endl;  //2.42
std::cout << "&var : " << &var << std::endl;  
std::cout << "&double_val : " << &double_val << std::endl;  
std::cout << "&reference_to_int_value : " << &reference_to_var << std::endl;  
std::cout << "&reference_to_double_val : " << &reference_to_double_val << std::endl;  

std::cout << "size of int : " << sizeof(var) << " bytes." << std::endl; //4
std::cout << "size of &int : " << sizeof(&var) << " bytes." << std::endl;   //8
std::cout << "==================================" << std::endl; 
var = 35;
double_val = 5.38;  // Can redefine variables and still store references
std::cout << "int value : " << var << std::endl;    //33
std::cout << "double value : " << double_val << std::endl;  //2.42
std::cout << "reference_to_int_value : " << reference_to_var << std::endl;  //33
std::cout << "reference_to_double_val : " << reference_to_double_val << std::endl;  //2.42
std::cout << "&var : " << &var << std::endl;  
std::cout << "&double_val : " << &double_val << std::endl;  
std::cout << "&reference_to_int_value : " << &reference_to_var << std::endl;  
std::cout << "&reference_to_double_val : " << &reference_to_double_val << std::endl;  

std::cout << "size of int : " << sizeof(var) << " bytes." << std::endl; //4
std::cout << "size of &int : " << sizeof(&var) << " bytes." << std::endl;   //8

return 0;

}
