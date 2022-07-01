#include <iostream>
#include <cstring>  
/*
C-String Concatenation and Copying
    https://en.cppreference.com/w/cpp/header/cstring

*/

int main(){
// Concatenation    https://en.cppreference.com/w/cpp/string/byte/strcat
std::cout << std::endl;
std::cout << "str::strcat : " << std::endl;
    char dest[50] = "Hello ";   // Modifiable row static arrays with 50 element stores on the stack
    char src[50] = "World"; 
    std::strcat(dest, src); // destination string dest, and source string src
    std::strcat(dest, " Goodbye world");    // Appends Goodbye world to dest
    std::cout << "dest : "<< dest << std::endl;
    std::cout << std::endl;

std::cout << "Joining strings with str::strcat : "<<std::endl;
    char * dest1 = new char [30] {'M','e','s','s','a','g','e', '\0'}; // Dynamic array, lives on heap memory
    char * source1 = new char [30] {' ', 'd', 'e', 'l', 'i', 'v', 'e', 'r', 'e','d', '\0'};
    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;    // 7 (Null character excluded)
    std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;    // 10
    std::strcat(dest1, source1);
    std::cout << "strlen(dest1) : " << std::strlen(dest1) << std::endl; // 17
    std::cout << "dest1 : " << dest1 << std::endl;
    std::cout << std::endl;
// std::strncat : concatenates n characters from src to dest. Returns a pointer to result string.
std::cout << "std::strncat : " << std::endl;
    char dest2 [50] {"Hello"};
    char source2[50] {" Message much longer than 6 characters"};
    std::cout << std::strncat(dest2, source2, 6) << std::endl;  // Only concatenates first 6 characters in the source string
    std::cout << std::endl;
// std::strcpy - copies stuff
std::cout << "std::strcpy : " << std::endl;
    const char* source3 = "This is a message in C++.";
    char * dest3 = new char[std::strlen(source3) + 1];  // Adds 1 to account for null terminating character, which is not accounted for by std::strlen
    std::strcpy(dest3, source3);
    std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
    std::cout << "dest3 : " << dest3 << std::endl;
    std::cout << std::endl;
// std::strncpy : Copies n characters from src to dest
    std::cout << "std::strncpy : " << std::endl;
    const char * source4 = "Hello";
    char dest4[] = {'1', '2', '3', '4', '5', '6', '7', '\0'};   // Adds terminating null character '\0' to end/print
    std::strncpy(dest4, source4, 5);    // Copies 5 characters from source to destination. Overrides  1, 2, 3, 4, 5, with "Hello"
    std::cout << "dest4 : " << dest4 << std::endl;
// 

return 0;

}

