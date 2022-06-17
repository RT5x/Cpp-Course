#include <iostream>

//  <io steam> is the standard 3rd party libary that allows the user to use std::cout.

//  Semicolons not needed at the end of #include statements.

int get_value(){
    return 3;
}

int main(){
    std::cout << "Hello World" << std::endl;
    //  Semicolons after each statement in main().
    //  endl command creates a new line so that the text is not cluttered.
    std::cout << "Number1" << std::endl;
    //new line
    std::cout << "Number2" << std::endl;
    return 0;
    //  return 0 allows the main function to return 0 to the operating system if the program was successful or not.
    //  Program ends here.
}

//  The int main() function is the starting point of the C++ program.
//  The main() is the entry point of the C++ program.

//  Statements in main() are run from top to bottom. The main function ends and begins with {}.

/*
    Multi-line comment block denoted this way
        Multiple lines make up a text block
    Text blocks cannt be nested!
*/




/* 
Part 2: Errors

Compile Time Errors

        - Syntax errors, etc
        - The compiler will throw up an error, and the program will not compile into a binary executable file.

Runtime Errors
    - Compilation suceeds, but the program does not function as intended.
    - Can cause the program to crash.

Warnings

    - Not a serious error, compilation succeeds and runs.
    - Information about your program

*/
