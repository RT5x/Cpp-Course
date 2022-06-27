#include <iostream>

/*
Dynamic Arrays: Arrays that can be allocated on heap memory. Can use std::nothrow version in new.



*/

int main(int argc, char **argv){

// Array dynamic allocation
size_t size{10};

// Examples:
double *p_list1 {new double[size]}; // Since array is uninitialized, it will contain junk values.
int *p_list2 {new(std::nothrow) int[size]}; // Array contents initialized to zero.
double *p_list3 {new(std::nothrow) double[size]{1, 2, 3, 4, 5}};    // Contains 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 since data 6-10 are not dynamically allocated.

// Check for nullptr using allocated array
if(!(p_list3 == nullptr)){
    for(size_t i{}; i < 10; ++i){
        std::cout << "value: " << p_list3[i] << " : " << *(p_list3 + i) << std::endl;
    }
}

// Releasing memory (Arrays)
delete[] p_list1;
p_list1 = nullptr;
delete[] p_list2;
p_list2 = nullptr;
delete[] p_list3;
p_list3 = nullptr;

// Static vs Dynamic arrays

// Static arrays allow for taking std::size and putting the array in for loops.
int list4[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Lives on the stack memory (static)
    std::cout << "Size of list4 : " << std::size(list4) << std::endl;

    for(auto s : list4){
        std::cout << "value : " << s << std::endl;
    }

// Dynamic arrays allocated on the heap memory, does not allow certain manipulations
int *p_list5 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Do not work with std::size() or range based for loops.

std::cout << "Program ends successfully."<<std::endl;
return 0;

}

