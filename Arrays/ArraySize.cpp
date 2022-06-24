#include <iostream>
#include <math.h>
/*
Arrays: A way to set up collections in a program.
- Groups all of the variables into one collection under a single name.
**Variables stored must be of the same type (int, double, float, etc.)**

The arrays can have indices accessed by the numbering system. Arrays have an index starting at 0.
The arrays have the number of elements specified by the number stored in the array.
    Note: Attempting to read data outside the scope of the array will cause the compiler to spit out garbage data, or 
    make a compiler error in some cases.

*/

int main(){

int array [] {10, 12, 43, 24, 2, 98, 20};

// Finding size of array with std::size()
std::cout << "scores size : " << std::size(array) << std::endl;

for (size_t i{0}; i < std::size(array); i++){   // Maximum index defined by the size of the array
    std::cout << "scores[" << i << "] : " << array[i] << std::endl;
}
std::cout << std::endl;
// Finding the size of an array with sizeof()
std::cout << "size of array : " << sizeof(array) << std::endl;
std::cout << "size of index : " << sizeof(array[0]) << std::endl;
std::cout << "length of array : " << sizeof(array) / sizeof(array[0]) << std::endl;
std::cout << std::endl;
// Looping through an array using range-based for loop
for (auto index : array){
    std::cout << "index: " << index << std::endl;
}

return 0;

}
