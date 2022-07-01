#include <iostream>
#include <string>  
#include "person.h"
/*

C++ Functions Intro:
    One definition rule: Definitions cannot show up more than once for a function in the program (with exception to classes)



*/

// variable (declaration and definition)
double weight {};
double add(double a, double b);

struct Point{   // Classes can have multiple declarations in different translation units
    double m_x{};
    double m_y{};
};

double add(double a, double b){
    return a+b; // Ordinary function only declared once
}

int main(){
  double result = add(10, 20);
  std::cout << "result : "<< result <<std::endl;

  //  Point p1;
 //   std::cout << "p1.x: " << p1.m_x << " , p1.y : " << p1.m_y << std::endl;

Person p2("John Doe", 31);
p2.print_info();

return 0;

}
