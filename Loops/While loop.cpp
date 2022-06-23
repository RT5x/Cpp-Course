#include <iostream>

/*
Loops: Allow a set of instructions to be repeatedly executed for a set number of times.

While loops:
    Iterator: The iterator variable i. Can only be accessed within the scope of the loop function, and nowhere else in main().

    Starting point: Initialization of unsigned int i{} will be the starting value of the index.

    Max value: const unsigned int COUNT is the maximum value to which the loop is iterated.

    Test:   controls when the loops stops. Usually, has the maximum value of i (While i < COUNT)

    Increment: i++ declared outside the command.

    Loop body:  Command that will be executed repeatedly.

general form:
    const unsigned int COUNT {max};
    unsigned int i {};
    
    while (i < COUNT){
        // body command here; i++;
    }

*/

int main(){

    const unsigned int COUNT {10};
    unsigned int i{0};  // Iterator declaration

    while (i < COUNT){      // Test
        std::cout << "This statement is printed " << i << " times." << std::endl; ++i;      // Statement + incrementation
    }
    std::cout << "Loop done" << std::endl;

    

return 0;

}

