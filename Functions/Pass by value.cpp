#include <iostream>

// Pass by value:

void function(int value);


int main(int argc, char ** argv){   

int value {23}; // Local
std::cout << "value (before): " << value  << " &value: " << &value << "\n";
function(value);    // Argument
std::cout << "value (after): " << value << " &value: " << &value<< "\n";    // retains the original value before the increment, since function(value) is stored as a copy of what is passed as an arg


return 0;
}

// Function declaration outside main()

void function(int value){   // Parameter
    ++value;    // value stored as a copy
    std::cout << "value: " << value << " &value: " << &value<< "\n";
}

