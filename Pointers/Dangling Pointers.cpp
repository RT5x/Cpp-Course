#include <iostream>

/*
Dangling Pointers: A pointer that does not point to a valid memory address. Trying to dereference and using a dangling pointer will result in undefined behavior.
    Types:
        - Uninitialized pointer:
            - 
        - Deleted pointer:
            - 
        - Multiple pointers pointing to the same memory:
            - 
Solutions:
    - Initialize pointers (always)
    - Reset pointers to nullptr after deletion
    - Make sure the owner pointer is very clear for multiple pointers that point to the same address.

*/

int main(){
// Uninitialized pointers:
int* p_number;  // Dangling uninitialized pointer
std::cout << "Uninitialized pointer : " << std::endl;
std::cout << "p_number : " << p_number << std::endl;
// std::cout << "*p_number : " << *p_number << std::endl;  --> crashes program

// Deleted pointers:
std::cout << std::endl;
std::cout << "Deleted pointer : " << std::endl;
int *p_number1 {new int{83}};
std::cout << "*p_number1 (Before delete) : " << *p_number1 << std::endl;    // 83
delete p_number1;
std::cout << "*p_number1 (After delete) : " << *p_number1 << std::endl;     // Junk value
std::cout << std::endl;

// Multiple pointers pointing to the same memory:
std::cout << "Multiple pointers pointing to the same memory: " << std::endl;
int *p_number3 {new int{24}};
int *p_number4 {new int {22}};

std::cout << "p_number3 : " << p_number3 << std::endl;
std::cout << "p_number4 : " << p_number4 << std::endl;

delete p_number3;   // p_number4 points to deleted memory.
std::cout << "p_number4 (after deletion of p_number3) : " << p_number4 << std::endl;
std::cout << std::endl;

std::cout << std::endl;

std::cout << "Solutions : " << std::endl;
std::cout << std::endl;
std::cout << "1 Initialize pointers upon declaration : " <<std::endl;
int *p_number5{};
int *p_number6{new int{20}};

// Check for nullptr before usage:
if(p_number6 != nullptr){
    std::cout << "*p_number6 : " << *p_number6 << std::endl;        // 20
}
std::cout << std::endl;
std::cout << "2 reset pointers after deletion : " <<std::endl;
int *p_number7{new int{81}};
std::cout << "p_number 7 : " << p_number7 << std::endl;
delete p_number7;
p_number7 = nullptr;    // Resets pointer

// Checks for nullptr before usage
if(p_number7 != nullptr){
    std::cout << "*p_number7 : " << *p_number7 << std::endl;
}else{
    std::cout << "Invalid memory access" << std::endl;
}
std::cout << std::endl;

std::cout << "3 make one clear master pointer that owns the memory : " <<std::endl;
// Other pointers are only able to dereference when master pointer is valid.
std::cout << std::endl;
int *p_number8 {new int{91}};
int *p_number9 {new int {12}};
std::cout << "p_number8 : " << p_number8 << std::endl;


// Dereference pointers, use them.
if(!(p_number8 == nullptr)){
    std::cout << "p_number9 : " << p_number9 << std::endl;
}
std::cout << std::endl;
delete p_number8; // Master releases memory
p_number8 = nullptr;

if(!(p_number8 == nullptr)){
    std::cout << "p_number9 : " << p_number9 << std::endl;
}else{
    std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;
}


// Two pointers cross-referencing each other
int *p_number10 {new int{24}};
int *p_number11 {p_number10};

// Dereference pointers
std::cout << "p_number10" << p_number10 << "-" << *p_number10 << std::endl;
if(!(p_number10 == nullptr)){
    std::cout << "p_number11" << p_number11 << "-" << *p_number11 << std::endl;
}
delete p_number10;
p_number10 = nullptr;


std::cout << "Program ends (no crash encountered)" << std::endl;
return 0;

}
