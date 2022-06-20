#include <iostream>

/*
Assignments: After a variable is initialized, you can later assign a new value to it. 
- Works with ints, doubles, booleans, auto.


*/

int main(){

int var1 {123}; // Declare and initialize
std::cout << "var1: " << var1 << std::endl;
var1 = 99; // Manually assigns a new value to var1
std::cout << "New var1: " << var1 << std::endl;
std::cout << std::endl;
double var2 {4.292};
std::cout << "var2: " << var2 << std::endl;
var2 = 1.098;
std::cout << "New var2: " << var2 << std::endl;
std::cout << std::endl;
bool state{false};
std::cout << std::boolalpha;
std::cout << "State: " << state << std::endl;
state = true;
std::cout << "New state: " << state << std::endl;
std::cout << std::endl;
auto var3{232ul};
std::cout << "var3: " << var3 << std::endl;
var3 = 298;
std::cout << "New var3: " << var3 << std::endl;


return 0;
}
