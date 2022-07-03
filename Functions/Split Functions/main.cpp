#include <iostream>
#include "compare.h"    // Includes declaration for max() from compare.h (preprocessor)
#include "compare.cpp"

// Revisiting compilation model across multiple files



int main(int argc, char ** argv){   
    int max1 = max(34, 53);
    std::cout << "max: " << max1 << std::endl;

    int minimum = min(34, 53);
    std::cout << "min: " << minimum << std::endl;

    int mult = incr_mult(34, 53);
    std::cout << "incr_mult result : " << mult << "\n";

return 0;

}

