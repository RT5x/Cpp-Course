#include <iostream>

/*
Loops: Allow a set of instructions to be repeatedly executed for a set number of times.

Do While loops:
    Iterator: The iterator variable i. Can only be accessed within the scope of the loop function, and nowhere else in main().

    Starting point: Initialization of unsigned int i{} will be the starting value of the index.

    Max value: const unsigned int COUNT is the maximum value to which the loop is iterated.

    Test:   controls when the loops stops. Usually, has the maximum value of i (While i < COUNT)

    Increment: i++ declared outside the command.

    Loop body:  Command that will be executed repeatedly.

general form:
const unsigned int COUNT {max};
unsigned int i{11};         // Initialization

do{
    std::cout << std::endl; ++i;    // Increment

}while(i < COUNT);      //Test

*/

int main(){
const unsigned int COUNT {10};  // Max count
unsigned int i {};  // Iterator declaration
do{
    std::cout << "[" << i << "] : Message here." << std::endl; ++i;     // Incrementation
}while(i < COUNT);  
// Runs the body then checks
// amogus
std::cout << "Loop done" << std::endl;

return 0;

}

