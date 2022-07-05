#include <iostream>

/*
Program Memory Map
    - Program typed in IDE, sent to compiler. Creates executable file, which can be loaded by RAM. The program is stored in a special section called 'program area'.
    - However, programs do not use "real memory for each program."
    - Virtual memory: Fools the program into thinking that it is the only program running on the operating system.
        - Memory map is a standard feature defined by the Operating system. Usually divided into sections.
    - Each program is abstracted into a process, and each process has access to memory range 2^n - 1.
    - Program IDE --> binary file --> Execute --> memory management unit
    - The entire program is not loaded in real memory by the CPU and MMU. Only parts about to be executed are loaded.
    
    - Memory map:
        - System
        - Stack: Stores local variables, function calls, etc.
            - Memory is finite. Lifetime controlled by the scope of the mechanism.
            - Developer isn't full control of memory lifetime.
        - Heap: Additional memory that can be queried for at run time.
            - Memory is infinite. Lifetime is controlled explicitly through new and delete operators.
            - Developer has full control over how memory is allocated, and when it is released.
        - Data 
        - Text



Dynamic Memory Allocation: A technique used to use heap storage to get additional memory from the memory map if stack memory is not enough for our purposes.
- Uses pointers
    Never:
        - Initialize into un-allocated memory
        - Write into uninitialized pointer through deference
        - Initialize pointer to null
        - Calling "delete" twice to end a pointer
*/

int main(int argc, char **argv){

// Lifetime through scope mechanism
{// stack lifetime vs heap lifetime
    int local_scope_var {33};       // Local var only exists within the scope
    int *local_ptr_var = new int;   // Memory still exists for local pointer until it is returned to the operating system.
}

// Initialize pointer with dynamic memory. Dynamically allocate.
// memory at run time and make a pointer
std::cout << std::endl;
int* p_number4{nullptr};
p_number4 = new int; // Dynamically allocates space for a single int on heap. Valid memory location is allocated after this line.
                        // Size of allocated memory will be able to store to type pointed to by pointer (4 bytes)
                        // Memory belongs to this program until it is explicitly called.

*p_number4 = 77;    // Writing into dynamically allocated memory
std::cout << "Dynamically allocated memory : " << std::endl;
std::cout << "*p_number4 : " << *p_number4 << std::endl;

// Releasing and resetting memory:
delete p_number4;
p_number4 = nullptr;        // No more valid data under this piece of memory.

// Initialize with 'new' upon ptr declaration:

int* p_number5{new int};        // Memory allocation contains junk value
int* p_number6{new int (22)};   // Uses direct initialization
int* p_number7{new int {23}};   // Uses uniform initialization
std::cout << std::endl;
std::cout << "Initializing with valid memory address at declaration : " << std::endl;
std::cout << "p_number5 : " << p_number5 << std::endl;      
std::cout << "*p_number5 : " << *p_number5 << std::endl;    // Junk value
std::cout << "p_number6 : " << p_number6 << std::endl;
std::cout << "*p_number6 : " << *p_number6 << std::endl;   // Decimal int
std::cout << "p_number7 : " << p_number7 << std::endl;      // Hexadecimal
std::cout << "*p_number7 : " << *p_number7 << std::endl;

// Releases memory
delete p_number5;           // Clears existing memory associated with this data
p_number5 = nullptr;        // Resets memory to nullptr (they signify that they do not contain any valid memory)
delete p_number6;
p_number6 = nullptr;
delete p_number7;
p_number7 = nullptr;

int number {22};    // Stack memory
int * p_number = &number;
std::cout << std::endl;
std::cout << "Declaring a pointer and assigning an address : " << std::endl;
std::cout << "number : " << number << std::endl;
std::cout << "p_number : " << p_number << std::endl;
std::cout << "&number : " << &number << std::endl;
std::cout << "*p_number : " << *p_number << std::endl;

int* p_number8; // Uninitialized pointer, contains junk address.
int number8 {12};
p_number8 = &number8;   // Pointer points to valid address of number8
std::cout << std::endl;
std::cout << "Uninitialized pointer : " << std::endl;
std::cout << "*p_number8 : " << *p_number8 << std::endl;

// Can reuse pointers
p_number5 = new int(81);
std::cout << "*p_number : " << *p_number5 << std::endl;
delete p_number5;
p_number5 = nullptr;

// Calling delete twice on a pointer (bad)
/*
p_number5 = new int (39);
std::cout << "*p_number : " << *p_number5 << std::endl;

delete p_number5;
delete p_number5;
    --> Program crashes, and does not complete.
    - Nothing runs after the first delete statement, and the memory is not released.

*/


std::cout << "Program ends (no crash encountered)" << std::endl;
return 0;

}
