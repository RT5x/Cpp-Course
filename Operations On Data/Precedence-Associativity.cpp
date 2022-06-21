#include <iostream>

/*
Precedence/Associativity: Set of tules to follow when there are multiple operators in the same expression.
- Multiplication/Division before division/subtraction.
- Operations done from left to right.
- Can use parenthesis to denote which operations done first.

Precedence in C++: https://en.cppreference.com/w/cpp/language/operator_precedence

- Do not rely on precedence tables, but instead use parenthesis to show which operations come first in your code.

*/

int main(){

int a {6};
int b {3};
int c {8};
int d {9};
int e {3};
int f {2};
int g {5};

int result = a + b * c - d / e - f + g;     // 30
std::cout << "result: " << result << std::endl;

result = a / b * c + d - e + f;     //24
std::cout << result <<std::endl;

result = a + (b * c) - (d / e) - f + g;     // 30
std::cout << "result (): " << result << std::endl;

result = (a + b) * c - d / e - f + g;     // 72
std::cout << "result (): " << result << std::endl;
return 0;
}

