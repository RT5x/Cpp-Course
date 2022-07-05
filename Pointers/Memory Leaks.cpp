#include <iostream>

/*
Memory Leaks: When access to dynamocally allocated memory is lost.
    - When a pointer referring to a piece of memory is lost.
    - Try to avoid this.

*/

int main(int argc, char **argv){

//Reassignment of stack address to active dynamic address pointer:
int *p_number {new int{32}};    // Address1
int number{24}; // Address2
p_number = &number;     // p_number allocated to address2, so program loses access to memory location address1 and memory is leaked.

// Double allocation:
int *p_number1 {new int{14}};

p_number1 = new int{12};    // Memory leaks int{14}

// Pointer in local scope:
{
    int *p_number2 {new int{22}};   // Memory leaked as it cannot be accessed outside scope.
}


std::cout << "Program ends successfully."<<std::endl;
return 0;

}
