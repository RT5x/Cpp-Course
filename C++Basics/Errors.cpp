#include <iostream>

int get_value(){
    return 3;
}

int main(){
    std::cout << "Hello World" << std::endl;
        //int value = 2/0;
       // std::cout << "value : " << value << std::endl;
    //Expect it to print the value here
    // Returns Hello World, but has a RunTime Error with divbyzero
    return 0;
}
 

/*
Compiler Error: No semicolon
    - msg: error: expected ';' before 'return'
    - Compilation unsuccessful, binary file not created.

Run Time Error: Divide by Zero
    - msg: warning: division by zero [-Wdiv-by-zero]

*/
