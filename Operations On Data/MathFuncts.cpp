#define _USE_MATH_DEFINES
#include <iostream>
#include <limits>
#include <cmath>
#include <math.h>
/*
#include <limits>   #standard libary that allows calculation of different numbers in a data set.

std::numeric_limits<T>::min()       // smallest positive number of that floating point type.
    - Min is 0 for unsigned integers (short)

std::numeric_limits<T>::max()       // largest positive number of that floating point type.
std::numeric_limits<T>::lowest()       // Lowest negative number of that floating point type.


#include <cmath>   #standard library containing common mathematical expressions
    std::floor():           std::cos()          std::exp()      std::sqrt()
    std::ceil():            std::sin()          std::log()      std::round()
    std::abs()              std::tan()          std::pow()

*/

int main(){
std::cout << "The range for short is from " << std::numeric_limits<short>::min() <<  " to " << std::numeric_limits<short>::max() << std::endl;
std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() <<  " to " <<std::numeric_limits<unsigned short>::max() << std::endl;

std::cout << "The range for int is from " << std::numeric_limits<int>::min() <<  " to " <<std::numeric_limits<int>::max() << std::endl;
std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() <<  " to " <<std::numeric_limits<unsigned int>::max() << std::endl;

std::cout << "The range for long is from " << std::numeric_limits<long>::min() <<  " to " <<std::numeric_limits<long>::max() << std::endl;
std::cout << "The range for float is from " << std::numeric_limits<float>::min() <<  " to " <<std::numeric_limits<float>::max() << std::endl;

std::cout << "The range (with lowest) for double is from " << std::numeric_limits<double>::lowest() <<  " to " <<std::numeric_limits<double>::max() << std::endl;
std::cout << "The range (with lowest) for long double is from " << std::numeric_limits<long double>::lowest() <<  " to " <<std::numeric_limits<long double>::max() << std::endl;

/* prints:
The range for short is from -32768 to 32767
The range for unsigned short is from 0 to 65535
The range for int is from -2147483648 to 2147483647
The range for unsigned int is from 0 to 4294967295
The range for long is from -2147483648 to 2147483647
The range for float is from 1.17549e-38 to 3.40282e+38
The range (with lowest) for double is from -1.79769e+308 to 1.79769e+308
The range (with lowest) for long double is from -1.18973e+4932 to 1.18973e+4932
*/

// Other facilities: https://en.cppreference.com/w/cpp/types/numeric_limits

std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
std::cout << "int digits: " << std::numeric_limits<int>::digits << std::endl;

// cmath example:


double weight {7.7};
    //floor:
        std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl; //7
    //ceil
        std::cout << "Weight rounded to ceiling is: " << std::ceil(weight) << std::endl;    //8
    
double value {-2.38};
    // absolute value
        std::cout << "|-2.38| = " << std::abs(value) << std::endl;      //2.38


// trigonometry:
std::cout << "sin(0) = " << std::sin(0)<< std::endl;        //0
std::cout << "cos(0) = " << std::cos(0)<< std::endl;        //1
std::cout << "cos(3.14159) = " << std::cos(3.14159)<< std::endl;    //-1
std::cout << "tan(3.14159) = " << std::tan(3.14159)<< std::endl;        //0
std::cout << "arctan(1) = " << std::atan(1)<< std::endl;        //0.785398
std::cout << "arcsin(0) = " << std::asin(0)<< std::endl;        //0
std::cout << "Pi equals " << std::atan(1) * 4 << std::endl;
// exponential
// exp(x) = e^x
double exponential = std::exp(10);
std::cout << "e^10=" << exponential << std::endl;       //22026.5

//pow
std::cout << "7^3 = " << std::pow(7,3) << std::endl;        //343
std::cout << "2^4 = " << std::pow(2,4) << std::endl;        //16

// log functions
    // logbase e:  
        std::cout << "ln(2.71) = " << std::log(2.71) << std::endl;      //0.996949
    // logbase 10:
        std::cout << "log(100) = " << std::log10(100) << std::endl;     //2
    
// sqrt
    std::cout << "square root of 81 is: " << std::sqrt(81) << std::endl;        //9

// round
    std::cout << "3.76 rounds to " << std::round(3.76) << std::endl;        //4
    std::cout << "2.5 rounds to " << std::round(2.5) << std::endl;          //3
    std::cout << "2.4 rounds to " << std::round(2.4) << std::endl;          //2

}
