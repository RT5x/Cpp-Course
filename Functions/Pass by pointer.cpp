#include <iostream>

// Pass by pointer:

void function(int* value);  // Declaration


int main(int argc, char ** argv){   

int value {23}; // Local
std::cout << "value (before): " << value  << " &value: " << &value << "\n";
function(&value);    // Argument
std::cout << "value (after): " << value << " &value: " << &value<< "\n";   // Pointer references the address of the original data, so the value is changed to 24.


return 0;
}

// Function definition outside main()

void function(int* value){   // Parameter
    ++(*value);    
    // (*value) dereferences the pointer
    std::cout << "value: " << *value << " &value: " << &value<< "\n";
}

