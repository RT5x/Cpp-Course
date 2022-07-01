#include <iostream>
#include <cstring>  // Standard library for c-string manipulation
/*

    Library reference: https://en.cppreference.com/w/cpp/header/cstring
C-String Manipulation: 


*/

int main(){

//std::strlen : find the length of a string
std::cout << "std::strlen : " << std::endl;
const char msg1 [] {"This is a string"};
const char msg2 [] {"This is also a string"};

std::cout << "message 1 : " << msg1 << std::endl;
std::cout << "message 2: " << msg2 << std::endl;

// strlen ignores null characters
std::cout << "strlen(message1) : " << std::strlen(msg1) << std::endl;   // 16

// sizeof() includes null character
std::cout << "sizeof(message1) : " << sizeof(msg1) << std::endl;    // 16 + 1 = 17 (null character counted)

// strlen works with decayed arrays
std::cout << "strlen(message2) : " << std::strlen(msg2) << std::endl;   // 21

// Size of pointer
std::cout << "sizeof(message2) : " << sizeof(msg2) << std::endl;    // 22
std::cout << std::endl;

// std::strcmp : comparing strings
    /*
        Returns a negative value is right string appears after left string in lexicographical order
        Returns zero if both strings are equal
        Returns positive value if left string appears after right string in lexicographical order
    */
std::cout << "std::strcmp : " << std::endl;
const char * string_1 {"Experiment"};
const char * string_2 {"Experimentally"};

// Prints comparison
std::cout << "str::strcmp (' " << string_1 << "," << string_2 << "') : " << std::strcmp(string_1, string_2) << std::endl;   // negative
// Reassign strings example:
    string_1 = "xEperimnet";
    string_2 = "Experminetalyl";
    // Prints comparison
std::cout << "str::strcmp ('" << string_1 << "," << string_2 << "') : " << std::strcmp(string_1, string_2) << std::endl;    // positive

    string_1 = "Number";
    string_2 = "Number";
std::cout << "str::strcmp ('" << string_1 << "," << string_2 << "') : " << std::strcmp(string_1, string_2) << std::endl;    // 0
std::cout << std::endl;

//std::strncmp : compares n characters in the strings
    // int strncmp(const char * lhs, const char * rhs, std::size_t count);
       /*
        Returns a negative value is right string appears after left string in lexicographical order
        Returns zero if both strings are equal or if count = 0
        Returns positive value if left string appears after right string in lexicographical order
    */

size_t n{3};
std::cout << std::endl;
std::cout << "std::strncmp : " << std::endl;
std::cout << "str::strncmp ('" << string_1 << ","<<string_2<< ","<< n << "') : " << std::strncmp(string_1, string_2, n) << std::endl;   // still 0
// Reassign strings
string_1 = "daiejm";
string_2 = "aaidjt";
// Print comparison:
std::cout << "str::strncmp ('" << string_1 << ","<<string_2<< ","<< n << "') : " << std::strncmp(string_1, string_2, n) << std::endl;   // positive
std::cout << std::endl;
/*
std::strchr : Find first occurrence of a character in a string
    https://en.cppreference.com/w/cpp/string/byte/strchr

*/
std::cout << "std::strchr : " << std::endl;
const char * str {"The first thing you will say, is to try before failure."};
char target = 'i';  // character of interest
const char *result = str;   // character array result stores the result
int iterations{};   

while ((result = std::strchr(result, target)) != nullptr){  // Searches all non-null pointers in the character array assigned to the string
    std::cout << "Found '" << target << "' starting at " << result << "\n";
    ++result;   // rwturns a pointer to each character in the character array, and only takes out target characters
    ++iterations;   // Increment result to point to the next character.
}
std::cout << "iterations : " << iterations << std::endl;
std::cout << std::endl;
/*
std::strrchr : find last occurrence
    https://en.cppreference.com/w/cpp/string/byte/strrchr
*/
std::cout << "std::strrchr : " << std::endl;
char input[] = "https://www.google.com";    // Input character array
char * output = std::strrchr(input, '/');   // Output is a char pointer that points to the last character occurrence of '/' in the input string
if(output){ 
    std::cout << output + 1 << std::endl;   // output + 1 prints past the target character found through std::strrchr
}
return 0;

}


