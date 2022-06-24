#include <iostream>

/*
Bounds of an Array

*/

int main(){

    int nums [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // Read beyond bounds: will read junk value or crash program.
    // Prints -182454512
    std::cout << "nums[12]: " << nums[12] << std::endl;
    nums[12] = 8273;        // Can modify data beyond bounds.

    std::cout << "nums[12]: " << nums[12] << std::endl;



return 0;

}
