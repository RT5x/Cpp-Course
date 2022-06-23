#include <iostream>

/*
Ternary Operators: An alternative to if/else statements.
    -  result = (condition) ? option1 : option2
*/

// Variables:
int max{};
int a{23};
int b{14};


int main(){
std::cout << std::endl;  
std::cout << "Regular if statement: " << std::endl;
if (a > b){     // Regular if statement
    max = a;

}else{
max = b;
}
std::cout << "max: " << max << std::endl;

std::cout << std::endl;


int case1 (a > b);
int case2 (b > a);

std::cout << std::endl;
std::cout << "Ternary expression: " << std::endl;
    // result = (condition) ? option1 : option2

max = (a > b) ? a : b;      // a and b must be convertible or of the same type.
std::cout << "max: " << max << std::endl;
std::cout << std::endl;

// Ternary initialization
bool fast = false;
int speed {fast ? 300 : 150};   // If fast, speed = 300, if not fast, speed = 150
std::cout << "Speed: " << speed << std::endl;


return 0;
}
