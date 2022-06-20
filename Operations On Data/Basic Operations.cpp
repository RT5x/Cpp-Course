#include <iostream>

/*
Basic Operations on Data:
    - Addition (+)
    - Subtraction (-)
    - Multiply (*)
    - Divide (/)
    - Modulus (%)
    - exponentiate


*/

int main(){

int var1 = 12;
int var2 = 17;
int var3 = 9;
int var4 = 10;

// Addition
int sum {var1 + var2};  
std::cout << var1 << " + " << var2 << " = " << sum << std::endl;        //29

// Subtraction
int diff {var1 - var2};
std::cout << var1 << " - " << var2 << " = " << diff << std::endl;       //-5

// Division
int quot {var1 / var2};
std::cout << var1 << " / " << var2 << " = " << quot << std::endl;       // 0 (cannot divide into)

// Multiplication
int prod {var1 * var2};
std::cout << var1 << " * " << var2 << " = " << prod << std::endl;       //204

// Modulus (remainder)
int mod {var2 % var1};
std::cout << var2 << " % " << var1 << " = " << mod << std::endl;        //5 remainder 

int result = 31 % 10;
std::cout << "31 % 10 = " << result << std::endl;       //1

return 0;
}

