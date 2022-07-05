#include <iostream>
#include <string>  // Standard libary for std::string

/*
Introduction to std::string
    Wraps on top of arrays and uses an inetrface that can be used to store string data
    https://en.cppreference.com/w/cpp/header/cstring

*/

int main(){
    // Declaring std::string variables
std::string full_name;  // Empty string
std::string note {"Message1"};
std::string message {"Hello world", 5}; // Takes only 5 characters from string literal
std::string message2(4, 'e');   // Initializes with multiple copies of the character
std::string string {message, 2, 2}; // Starts at index 2 of Hello World and takes only 2 characters after that

// Printing out the values:
std::cout << "full_name : " << full_name << std::endl;      
std::cout << "message : " << message << std::endl;      // Hello
std::cout << "message2 : " << message2<< std::endl;     // eeee
std::cout << "string : " << string << std::endl;        // ll

// Changing std::string at runtime
note = "A new note";
std::cout << note << std::endl;
return 0;

}

