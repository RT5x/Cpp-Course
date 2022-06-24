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

//Declaring an array of ints
int scores[10];    // Junk data

// Manually assigning data to an array:
scores[0] = 20;
scores[1] = 21;
scores[2] = 9;
scores[3] = 2;

// Initializing array at declaration (braced initialization):
double array[5] {1.3, 2.9, 1.0, 2.3, 10.2};

    for(size_t i{}; i < 5; i++){
        std::cout << "array[" << i << "] : " << array[i]<<std::endl;
    }
std::cout << std::endl;

// Writing data with loops
std::cout << "Writing data with a loop : " << std::endl;
    for (size_t i{}; i < 10; i++){
        scores[i] = i * 3;
}
std::cout << std::endl;

// If you do not initialize each element, the remaining ones are initialized to zero
std::cout << "Leaving some elements un-initialized : " << std::endl;
int array1[3] = {2, 4, 1};   // Size can be omitted from array at declaration

    for(size_t i{0}; i < 5; i++){
        std::cout << "array1[" << i << "] : " << array1[i] << std::endl;
    }

// Reading values manually
    std::cout << "Reading out score values [manually] : " << std::endl;
    std::cout << "scores[0] : " << scores[0] << std::endl;  // Index starts at 0
    std::cout << "scores[1] : " << scores[1] << std::endl;
    std::cout << "scores[2] : " << scores[2] << std::endl;
    std::cout << "scores[3] : " << scores[3] << std::endl;
    std::cout << "scores[4] : " << scores[4] << std::endl;
    std::cout << "scores[5] : " << scores[5] << std::endl;
    std::cout << "scores[6] : " << scores[6] << std::endl;
    std::cout << "scores[7] : " << scores[7] << std::endl;
    std::cout << "scores[8] : " << scores[8] << std::endl;
    std::cout << "scores[9] : " << scores[9] << std::endl;  // Ends at 9
std::cout << std::endl;

std::cout << "Looping through an array : " << std::endl;
    for (size_t i{0}; i < 10; i++){
    std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }
std::cout << std::endl;
// Constant arrays: can't be modified
const int my_array [] {1, 2, 4};
//my_array[1] = 3;  Error: can't change elements of a const array.

// Sums scores array, stores result in a sum
int sum = 0;
    for (int element : scores){
        sum += element;
}
std::cout << "Score sum : " << sum << std::endl;
// Prints sum of 3i from i = 0 to 9

// Omitting size of array
int array2[] {12, 10, 2, 4, 9};
    for(auto value : array2){
        std::cout << "value : " << value << std::endl;
    }

long double geometric_seq[50];

for (size_t i{0}; i < 50; i++){
    geometric_seq[i] = pow(0.5, i);
}
    for(auto value1 : geometric_seq){
        std::cout << "value1 : " << value1 << std::endl;
    }

long double geometric_sum = 0;
    for (size_t i{0}; i < 50; i++){
        geometric_sum += geometric_seq[i];
    }
std::cout << "Geometric sum : " << geometric_sum << std::endl;  //2
return 0;

}

