#include <iostream>

/*
Loops: Allow a set of instructions to be repeatedly executed for a set number of times.

For loops:
    Iterator: The iterator variable i. Can only be accessed within the scope of the loop function, and nowhere else in main().

    Starting point: Initialization of unsigned int i{} will be the starting value of the index.

    Test:   controls when the loops stops. Usually, has the maximum value of i.

    Increment:  ++i will increment i until it reaches the desired value.

    Loop body:  Command that will be executed repeatedly.

general form:
    for (size_t i{starting_pt}; i < max; i++){
        std::cout << loop body;
    }

*/

int main(){

// Want to print out a message multiple times:
        for(unsigned int i{}; i < 10;++i){                  // loop
        // The loop has a maximum index of 10, and increments from 0 to 10.
            std::cout << "C++ 10 times" << std::endl;       // Command (loop body)
        }
std::cout << std::endl;
// size_t: Representation of an unsigned integer type (positive), which can replace unsigned int at the beginning of the loop (8 bytes).
    for(size_t i{}; i < 2;++i){                  
                std::cout << "More C++ loops" << std::endl;       
            }
std::cout << std::endl;
// Other operations in the loop:
    for(size_t i{0}; i < 5; i++){
        std::cout << "i: " << i << ". Triple that and you get " << 3*i << std::endl;
    }   // prints out 0, 3, 6, 9, 12
std::cout << std::endl;
    for (size_t i{}; i < 3; i++)
        std::cout << "removing {}" << std::endl;
    // The {} can be left out of the loop as long as there is only one statement in the loop body.
std::cout << std::endl;

// Accessing the iterator outside the loop:

    size_t j{}; // Declare iterator outside loop
        for(j; j < 10; j++){
            std::cout << "Using j as the variable from the main function local scope" << j << std::endl;
        }
std::cout << std::endl;
std::cout << "Loop done, the value of j is: " << j << std::endl;
std::cout << std::endl;

// Using a variable to store test value for loop:
const size_t MAX_COUNT {3};
    for (size_t k{}; k < MAX_COUNT; k++){
        std::cout << "The value of k is: " << k << std::endl;
    }
std::cout << std::endl;
for(size_t i{}; i < 100; i++){
std::cout << "There are " << i << " pencils are here. There are 5 people, so " << i/5 << 
" pencils per person, with a remainder of " << i%5 << " pencils." << std::endl;
}

return 0;

}


