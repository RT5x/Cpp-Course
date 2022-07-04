#include <iostream>

// Pass by reference:

void function(int& value);  // Declaration


int main(int argc, char ** argv){   

int value {23}; // Local
std::cout << "value (before): " << value  << " &value: " << &value << "\n";  //23
function(value);    // Argument
std::cout << "value (after): " << value << " &value: " << &value<< "\n";   // References original variable, which is changed to 24


return 0;
}

// Function definition outside main()

void function(int& value){   // Parameter
    ++(value);    
    std::cout << "value: " << value << " &value: " << &value<< "\n";    // Shows same address as in the scope of main()
}

