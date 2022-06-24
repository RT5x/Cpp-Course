#include <iostream>
#include <math.h>
/*


*/

int main(){

// Declaring array of characters
char array [] {'H', 'e', 'l', 'l', 'o', '\0'};

// '\0' is included as the final element to denote a proper null termination of the array. C-strings are ones that include this null terminator.
// This tells the compiler when to stop reading, and terminates the array.

// Print array with loop
std::cout << "array: " << std::endl;
for (auto idx : array){
    std::cout << "idx: " << idx << std::endl;
}
std::cout << "size: " << std::size(array) << std::endl;
std::cout << array << std::endl;
// Modifying elements of the array

std::cout << std::endl;
std::cout << "Modifying array data : " << std::endl;

array[0] = 'B';

// Print array
std::cout << "array: "<< std::endl;
for (auto idx : array){
    std::cout << "idx: " << idx << std::endl;
}

char message [] {'1', '2', '3', '4', '\0'};
std::cout << message << std::endl;
std::cout << sizeof(message) << std::endl;

// String literal
char message2 [] {"Hello"};
std::cout << message2 << std::endl;
std::cout << sizeof(message2) << std::endl;

//
int numbers [] {1, 2, 3, 4, 5};
std::cout << "numbers : " << numbers << std::endl;
// You cannot directly print out non-character arrays
// Prints 0x5a535ffad0

return 0;

}
